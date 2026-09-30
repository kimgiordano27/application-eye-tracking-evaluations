/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.AvatarEntity.<TryToLoadUserAvatar>d__22$$System.IDisposable.Dispose
ENTRY_POINT: 051cdfd8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_AvatarEntity_<TryToLoadUserAvatar>d__22__System_IDisposable_Dispose
               (long param_1,undefined8 param_2,int param_3,int param_4,long param_5,long param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint in_w8;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  uint unaff_w24;
  int unaff_w25;
  uint uVar10;
  uint unaff_w29;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  
  if (unaff_w29 < in_w8) {
    lVar6 = param_1 + (long)(int)unaff_w29 * 0x18;
    iVar1 = param_3;
    if (param_3 < 0) {
      iVar1 = param_3 + 1;
    }
    uVar13 = *(undefined8 *)(lVar6 + 0x28);
    uVar11 = *(undefined8 *)(lVar6 + 0x20);
    uVar7 = *(undefined8 *)(lVar6 + 0x30);
    if ((int)unaff_w24 <= iVar1 >> 1) {
      do {
        uVar10 = unaff_w24 * 2;
        uVar4 = (uint)*(undefined8 *)(param_1 + 0x18);
        if ((int)uVar10 < param_3) {
          uVar2 = uVar10 + param_4;
          if ((uVar4 <= uVar2 - 1) || (uVar4 <= uVar2)) goto LAB_051ce1c4;
          if (param_5 == 0) goto LAB_051ce1c8;
          lVar6 = param_1 + (long)(int)(uVar2 - 1) * 0x18;
          lVar8 = param_1 + (long)(int)uVar2 * 0x18;
          uVar14 = *(undefined8 *)(lVar6 + 0x28);
          uVar12 = *(undefined8 *)(lVar6 + 0x20);
          uVar5 = *(undefined8 *)(lVar6 + 0x30);
          uVar16 = *(undefined8 *)(lVar8 + 0x28);
          uVar15 = *(undefined8 *)(lVar8 + 0x20);
          uVar9 = *(undefined8 *)(lVar8 + 0x30);
          if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
            FUN_02dcfd18();
          }
          in_stack_00000090 = uVar15;
          in_stack_00000098 = uVar16;
          in_stack_000000a0 = uVar9;
          in_stack_000000b0 = uVar12;
          in_stack_000000b8 = uVar14;
          in_stack_000000c0 = uVar5;
          uVar2 = (**(code **)(param_5 + 0x18))
                            (*(undefined8 *)(param_5 + 0x40),&stack0x000000b0,&stack0x00000090,
                             *(undefined8 *)(param_5 + 0x28));
          uVar4 = (uint)*(undefined8 *)(param_1 + 0x18);
          uVar10 = uVar10 | uVar2 >> 0x1f;
        }
        unaff_w29 = unaff_w25 + uVar10;
        if (uVar4 <= unaff_w29) goto LAB_051ce1c4;
        if (param_5 == 0) {
LAB_051ce1c8:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar6 = param_1 + (long)(int)unaff_w29 * 0x18;
        uVar12 = *(undefined8 *)(lVar6 + 0x28);
        uVar9 = *(undefined8 *)(lVar6 + 0x20);
        uVar5 = *(undefined8 *)(lVar6 + 0x30);
        if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
          FUN_02dcfd18();
        }
        in_stack_00000090 = uVar9;
        in_stack_00000098 = uVar12;
        in_stack_000000a0 = uVar5;
        in_stack_000000b0 = uVar11;
        in_stack_000000b8 = uVar13;
        in_stack_000000c0 = uVar7;
        iVar3 = (**(code **)(param_5 + 0x18))
                          (*(undefined8 *)(param_5 + 0x40),&stack0x000000b0,&stack0x00000090,
                           *(undefined8 *)(param_5 + 0x28));
        if (-1 < iVar3) {
          unaff_w29 = unaff_w25 + unaff_w24;
          break;
        }
        if ((*(uint *)(param_1 + 0x18) <= unaff_w29) ||
           (*(uint *)(param_1 + 0x18) <= unaff_w25 + unaff_w24)) goto LAB_051ce1c4;
        lVar8 = param_1 + (long)(int)(unaff_w25 + unaff_w24) * 0x18;
        uVar9 = *(undefined8 *)(lVar6 + 0x28);
        uVar5 = *(undefined8 *)(lVar6 + 0x20);
        *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)(lVar6 + 0x30);
        *(undefined8 *)(lVar8 + 0x28) = uVar9;
        *(undefined8 *)(lVar8 + 0x20) = uVar5;
        unaff_w24 = uVar10;
      } while ((int)uVar10 <= iVar1 >> 1);
      in_w8 = *(uint *)(param_1 + 0x18);
    }
    if (unaff_w29 < in_w8) {
      param_1 = param_1 + (long)(int)unaff_w29 * 0x18;
      *(undefined8 *)(param_1 + 0x28) = uVar13;
      *(undefined8 *)(param_1 + 0x20) = uVar11;
      *(undefined8 *)(param_1 + 0x30) = uVar7;
      return;
    }
  }
LAB_051ce1c4:
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


