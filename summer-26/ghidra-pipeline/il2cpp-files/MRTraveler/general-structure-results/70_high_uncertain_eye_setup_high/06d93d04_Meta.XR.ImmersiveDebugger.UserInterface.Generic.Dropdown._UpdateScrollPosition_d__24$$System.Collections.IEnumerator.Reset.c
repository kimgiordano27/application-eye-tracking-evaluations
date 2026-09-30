/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Dropdown.<UpdateScrollPosition>d__24$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 06d93d04
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown_<UpdateScrollPosition>d__24__System_Collections_IEnumerator_Reset
               (long param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,long param_7)

{
  uint uVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong in_x9;
  ulong uVar5;
  int *in_x10;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  long lVar7;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long lVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  do {
    if ((bool)in_ZR) {
      puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_06d93d30;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar3 = (undefined8 *)FUN_03cf1348();
LAB_06d93d30:
        iVar2 = (*(code *)*puVar3)();
        if (iVar2 <= unaff_w21) {
          return;
        }
        lVar8 = *(long *)(unaff_x19 + 0x28);
        if (lVar8 == 0) {
LAB_06d93f10:
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (0 < (int)uVar1) {
          uVar9 = 0;
          do {
            if (uVar1 <= uVar9) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb38();
            }
            lVar4 = *unaff_x20;
            lVar7 = *(long *)(lVar8 + (long)(int)uVar9 * 8 + 0x20);
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *unaff_x25) {
                  puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
                  uVar13 = param_5;
                  goto LAB_06d93db8;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            puVar3 = (undefined8 *)FUN_03cf1348();
            uVar13 = param_5;
LAB_06d93db8:
            lVar4 = (*(code *)*puVar3)();
            if ((lVar4 == 0) || (lVar7 == 0)) goto LAB_06d93f10;
            param_5 = uVar13;
            if (*(int *)(lVar4 + 0x10) == *(int *)(lVar7 + 0x10)) {
              lVar4 = *unaff_x20;
              uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar5 != 0) {
                piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) == *unaff_x25) {
                    puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
                    goto LAB_06d93e2c;
                  }
                  uVar5 = uVar5 - 1;
                  piVar6 = piVar6 + 4;
                } while (uVar5 != 0);
              }
              puVar3 = (undefined8 *)FUN_03cf1348();
LAB_06d93e2c:
              lVar4 = (*(code *)*puVar3)();
              if (lVar4 == 0) goto LAB_06d93f10;
              lVar4 = *(long *)(lVar4 + 0x18);
              if (*(int *)(*unaff_x26 + 0xe0) == 0) {
                thunk_FUN_03cd7500(*unaff_x26);
              }
              uVar5 = FUN_085dfaac(lVar4,0,0);
              param_5 = uVar13;
              if ((uVar5 & 1) == 0) {
                if (lVar4 == 0) goto LAB_06d93f10;
                lVar7 = *(long *)(lVar7 + 0x18);
                uVar10 = FUN_085eb198(lVar4,0);
                uVar11 = param_3;
                uVar12 = param_4;
                param_5 = FUN_085eb388(lVar4,0);
                if (lVar7 == 0) goto LAB_06d93f10;
                FUN_085ebce8(uVar10,param_3,param_4,param_5,uVar11,uVar12,uVar13,lVar7,0);
              }
            }
            uVar1 = *(uint *)(lVar8 + 0x18);
            uVar9 = uVar9 + 1;
          } while ((int)uVar9 < (int)uVar1);
        }
        unaff_w21 = unaff_w21 + 1;
        param_1 = *unaff_x20;
        param_7 = *unaff_x24;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_7;
  } while( true );
}


