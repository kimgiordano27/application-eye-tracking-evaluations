/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionDestroy
ENTRY_POINT: 06af3030
PROGRAM: Waifu-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_10;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06af3288) */

void OVRPlugin_UnityOpenXR__OnSessionDestroy(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong in_x9;
  ulong uVar4;
  long in_x10;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long *plVar6;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined4 uStack0000000000000010;
  uint uStack0000000000000014;
  uint in_stack_00000018;
  
  do {
    piVar5 = (int *)(in_x10 + 8);
    do {
      if (*(long *)(piVar5 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_06af3068;
      }
      in_x9 = in_x9 - 1;
      piVar5 = piVar5 + 4;
    } while (in_x9 != 0);
    do {
      puVar2 = (undefined8 *)FUN_0338f71c();
LAB_06af3068:
      auVar14 = (*(code *)*puVar2)();
      if (auVar14._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      plVar6 = *(long **)(unaff_x20 + 0x30);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      lVar3 = *plVar6;
      uVar1 = *(undefined4 *)(auVar14._0_8_ + 0x10);
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)(unaff_x26 + 0x4b8)) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
            goto LAB_06af30d8;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_0338f71c(plVar6,*(long *)(unaff_x26 + 0x4b8),4);
LAB_06af30d8:
      uVar4 = (*(code *)*puVar2)(plVar6,uVar1,&stack0x00000010,puVar2[1]);
      if ((uVar4 & 1) != 0) {
        if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        uVar4 = (ulong)uStack0000000000000014;
        uVar10 = (ulong)in_stack_00000018;
        uVar8 = FUN_07a17248(uStack0000000000000010,uVar4,uVar10,*(long *)(unaff_x20 + 0x38),0);
        fVar7 = auVar14._12_4_;
        if (auVar14._8_4_ <= fVar7) {
          fVar13 = 1.0;
          fVar7 = 0.0;
LAB_06af318c:
          fVar12 = 0.0;
          fVar9 = 1.0;
        }
        else {
          if (fVar7 <= 0.0) {
            fVar7 = 1.0;
            fVar13 = 0.0;
            goto LAB_06af318c;
          }
          fVar7 = (auVar14._8_4_ / fVar7) * 0.5;
          fVar9 = fVar7;
          if (1.0 < fVar7) {
            fVar9 = 1.0;
          }
          if (fVar7 < 0.0) {
            fVar9 = 0.0;
          }
          fVar7 = fVar9 * 0.0 + 1.0;
          fVar13 = fStack000000000000000c - fVar9 * fStack000000000000000c;
          fVar12 = fStack0000000000000008 - fVar9 * fStack0000000000000008;
          fVar9 = fVar7;
        }
        lVar3 = *(long *)(unaff_x27 + 0x498);
        fVar11 = *(float *)(unaff_x20 + 0x40);
        if (*(int *)(lVar3 + 0xe0) == 0) {
          FUN_033b9870();
          lVar3 = *(long *)(unaff_x27 + 0x498);
        }
        lVar3 = *(long *)(lVar3 + 0xb8);
        *(float *)(lVar3 + 0x18) = fVar9;
        *(float *)(lVar3 + 0x1c) = fVar11 * 0.5;
        *(float *)(lVar3 + 0xc) = fVar7;
        *(float *)(lVar3 + 0x10) = fVar13;
        *(float *)(lVar3 + 0x14) = fVar12;
        OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata__FixJointPairEndPositionHand
                  (uVar8,uVar4,uVar10,0,0);
      }
      lVar3 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)(unaff_x24 + 0x870)) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_06af300c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_0338f71c();
LAB_06af300c:
      uVar4 = (*(code *)*puVar2)();
      if ((uVar4 & 1) == 0) {
        if (unaff_x19 == (long *)0x0) {
          return;
        }
        lVar3 = *unaff_x19;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 == 0) goto LAB_06af321c;
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_06af3204;
      }
      param_1 = *unaff_x19;
      param_3 = *(long *)(unaff_x25 + 0x3e0);
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = *(long *)(param_1 + 0xb0);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_06af3204:
    if (*(long *)(piVar5 + -2) == DAT_083cc7a8) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_06af3238;
    }
  }
LAB_06af321c:
  puVar2 = (undefined8 *)FUN_0338f71c();
LAB_06af3238:
  (*(code *)*puVar2)();
  return;
}


