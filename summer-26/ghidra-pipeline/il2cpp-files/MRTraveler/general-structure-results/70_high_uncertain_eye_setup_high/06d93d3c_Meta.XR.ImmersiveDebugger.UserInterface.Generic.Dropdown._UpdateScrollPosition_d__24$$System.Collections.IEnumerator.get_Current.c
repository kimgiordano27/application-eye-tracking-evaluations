/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Dropdown.<UpdateScrollPosition>d__24$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 06d93d3c
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown_<UpdateScrollPosition>d__24__System_Collections_IEnumerator_get_Current
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               int param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  long lVar6;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long lVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  do {
    if (param_5 <= unaff_w21) {
      return;
    }
    lVar7 = *(long *)(unaff_x19 + 0x28);
    if (lVar7 == 0) {
LAB_06d93f10:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (0 < (int)uVar1) {
      uVar8 = 0;
      do {
        if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        lVar3 = *unaff_x20;
        lVar6 = *(long *)(lVar7 + (long)(int)uVar8 * 8 + 0x20);
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x25) {
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
              uVar12 = param_4;
              goto LAB_06d93db8;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)FUN_03cf1348();
        uVar12 = param_4;
LAB_06d93db8:
        lVar3 = (*(code *)*puVar2)();
        if ((lVar3 == 0) || (lVar6 == 0)) goto LAB_06d93f10;
        param_4 = uVar12;
        if (*(int *)(lVar3 + 0x10) == *(int *)(lVar6 + 0x10)) {
          lVar3 = *unaff_x20;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar4 != 0) {
            piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == *unaff_x25) {
                puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
                goto LAB_06d93e2c;
              }
              uVar4 = uVar4 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar4 != 0);
          }
          puVar2 = (undefined8 *)FUN_03cf1348();
LAB_06d93e2c:
          lVar3 = (*(code *)*puVar2)();
          if (lVar3 == 0) goto LAB_06d93f10;
          lVar3 = *(long *)(lVar3 + 0x18);
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_03cd7500(*unaff_x26);
          }
          uVar4 = FUN_085dfaac(lVar3,0,0);
          param_4 = uVar12;
          if ((uVar4 & 1) == 0) {
            if (lVar3 == 0) goto LAB_06d93f10;
            lVar6 = *(long *)(lVar6 + 0x18);
            uVar9 = FUN_085eb198(lVar3,0);
            uVar10 = param_2;
            uVar11 = param_3;
            param_4 = FUN_085eb388(lVar3,0);
            if (lVar6 == 0) goto LAB_06d93f10;
            FUN_085ebce8(uVar9,param_2,param_3,param_4,uVar10,uVar11,uVar12,lVar6,0);
          }
        }
        uVar1 = *(uint *)(lVar7 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar1);
    }
    unaff_w21 = unaff_w21 + 1;
    lVar7 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_06d93d30;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348();
LAB_06d93d30:
    param_5 = (*(code *)*puVar2)();
  } while( true );
}


