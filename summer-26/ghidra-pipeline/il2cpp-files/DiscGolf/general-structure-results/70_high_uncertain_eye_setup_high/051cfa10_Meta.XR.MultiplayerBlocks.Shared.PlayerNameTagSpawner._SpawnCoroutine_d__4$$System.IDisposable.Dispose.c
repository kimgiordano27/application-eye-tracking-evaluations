/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.PlayerNameTagSpawner.<SpawnCoroutine>d__4$$System.IDisposable.Dispose
ENTRY_POINT: 051cfa10
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_PlayerNameTagSpawner_<SpawnCoroutine>d__4__System_IDisposable_Dispose
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined1 param_4 [16]
               )

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined1 in_ZR;
  int iVar5;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  
  uVar22 = param_4._8_8_;
  uVar20 = param_4._0_8_;
  uVar13 = param_2._8_8_;
  uVar9 = param_2._0_8_;
  while( true ) {
    *(undefined8 *)(param_1 + 0x48) = uVar13;
    *(undefined8 *)(param_1 + 0x40) = uVar9;
    *(undefined8 *)(param_1 + 0x58) = uVar22;
    *(undefined8 *)(param_1 + 0x50) = uVar20;
    if ((bool)in_ZR) {
      return;
    }
    uVar6 = *(uint *)(unaff_x22 + 0x18);
    uVar2 = unaff_x25 + 1;
    if (uVar6 <= (uint)uVar2) break;
    lVar3 = unaff_x22 + uVar2 * 0x40;
    uVar7 = unaff_x25 & 0xffffffff;
    uVar12 = *(undefined8 *)(lVar3 + 0x28);
    uVar8 = *(undefined8 *)(lVar3 + 0x20);
    uVar18 = *(undefined8 *)(lVar3 + 0x38);
    uVar16 = *(undefined8 *)(lVar3 + 0x30);
    uVar13 = *(undefined8 *)(lVar3 + 0x48);
    uVar9 = *(undefined8 *)(lVar3 + 0x40);
    uVar22 = *(undefined8 *)(lVar3 + 0x58);
    uVar20 = *(undefined8 *)(lVar3 + 0x50);
    if (unaff_x23 <= (long)unaff_x25) {
      do {
        uVar6 = (uint)uVar7;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar6) goto LAB_051cfa3c;
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar3 = unaff_x22 + (long)(int)uVar6 * 0x40;
        uVar14 = *(undefined8 *)(lVar3 + 0x28);
        uVar10 = *(undefined8 *)(lVar3 + 0x20);
        uVar19 = *(undefined8 *)(lVar3 + 0x38);
        uVar17 = *(undefined8 *)(lVar3 + 0x30);
        uVar15 = *(undefined8 *)(lVar3 + 0x48);
        uVar11 = *(undefined8 *)(lVar3 + 0x40);
        uVar23 = *(undefined8 *)(lVar3 + 0x58);
        uVar21 = *(undefined8 *)(lVar3 + 0x50);
        if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_02dcfd18();
        }
        in_stack_00000080 = uVar10;
        in_stack_00000088 = uVar14;
        in_stack_00000090 = uVar17;
        in_stack_00000098 = uVar19;
        in_stack_000000a0 = uVar11;
        in_stack_000000a8 = uVar15;
        in_stack_000000b0 = uVar21;
        in_stack_000000b8 = uVar23;
        in_stack_000000c0 = uVar8;
        in_stack_000000c8 = uVar12;
        in_stack_000000d0 = uVar16;
        in_stack_000000d8 = uVar18;
        in_stack_000000e0 = uVar9;
        in_stack_000000e8 = uVar13;
        in_stack_000000f0 = uVar20;
        in_stack_000000f8 = uVar22;
        iVar5 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x000000c0,&stack0x00000080,
                           *(undefined8 *)(unaff_x20 + 0x28));
        unaff_x25 = uVar7;
        if (-1 < iVar5) break;
        if ((*(uint *)(unaff_x22 + 0x18) <= uVar6) || (*(uint *)(unaff_x22 + 0x18) <= uVar6 + 1))
        goto LAB_051cfa3c;
        uVar10 = *(undefined8 *)(lVar3 + 0x20);
        uVar14 = *(undefined8 *)(lVar3 + 0x38);
        uVar11 = *(undefined8 *)(lVar3 + 0x30);
        uVar7 = (ulong)(uVar6 - 1);
        lVar4 = unaff_x22 + (long)(int)(uVar6 + 1) * 0x40;
        *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(lVar3 + 0x28);
        *(undefined8 *)(lVar4 + 0x20) = uVar10;
        *(undefined8 *)(lVar4 + 0x38) = uVar14;
        *(undefined8 *)(lVar4 + 0x30) = uVar11;
        uVar10 = *(undefined8 *)(lVar3 + 0x40);
        uVar14 = *(undefined8 *)(lVar3 + 0x58);
        uVar11 = *(undefined8 *)(lVar3 + 0x50);
        *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(lVar3 + 0x48);
        *(undefined8 *)(lVar4 + 0x40) = uVar10;
        *(undefined8 *)(lVar4 + 0x58) = uVar14;
        *(undefined8 *)(lVar4 + 0x50) = uVar11;
        unaff_x25 = uVar7;
      } while (unaff_w21 <= (int)(uVar6 - 1));
      uVar6 = *(uint *)(unaff_x22 + 0x18);
    }
    uVar1 = (int)unaff_x25 + 1;
    if (uVar6 <= uVar1) break;
    in_ZR = uVar2 == unaff_x24;
    param_1 = unaff_x22 + (long)(int)uVar1 * 0x40;
    *(undefined8 *)(param_1 + 0x28) = uVar12;
    *(undefined8 *)(param_1 + 0x20) = uVar8;
    *(undefined8 *)(param_1 + 0x38) = uVar18;
    *(undefined8 *)(param_1 + 0x30) = uVar16;
    unaff_x25 = uVar2;
  }
LAB_051cfa3c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


