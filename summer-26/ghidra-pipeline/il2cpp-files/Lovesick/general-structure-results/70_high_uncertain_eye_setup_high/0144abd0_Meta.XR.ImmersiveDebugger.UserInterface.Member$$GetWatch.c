/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Member$$GetWatch
ENTRY_POINT: 0144abd0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Member__GetWatch
               (ulong param_1,long param_2,long param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  ulong uVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_7349);
    thunk_FUN_00d48444(System_Func<Vector3,_float>_TypeInfo);
    *(undefined1 *)(unaff_x22 + 0xa5d) = 1;
  }
  puVar2 = System_Func<Vector3,_float>_TypeInfo;
  if (param_4 != (long *)0x0) {
    lVar7 = *param_4;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)System_Func<Vector3,_float>_TypeInfo) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0144ac58;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_00d59724(param_4,*(long *)System_Func<Vector3,_float>_TypeInfo,0);
LAB_0144ac58:
    uVar4 = (*(code *)*puVar3)(param_4,puVar3[1]);
    if (param_3 != 0) {
      uVar10 = FUN_0267e21c(param_3,uVar4,0);
      if ((uVar10 & 1) == 0) {
        return;
      }
      lVar8 = *param_4;
      iVar1 = *(int *)(param_2 + 0x20);
      lVar7 = *(long *)puVar2;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar7) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0144acdc;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar3 = (undefined8 *)FUN_00d59724(param_4,lVar7,0);
LAB_0144acdc:
      uVar4 = (*(code *)*puVar3)(param_4,puVar3[1]);
      if (iVar1 < 1) {
        lVar8 = *param_4;
        lVar7 = *(long *)puVar2;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar10 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar7) {
              puVar3 = (undefined8 *)(lVar8 + (long)(*piVar12 + 3) * 0x10 + 0x138);
              goto LAB_0144ad58;
            }
            uVar10 = uVar10 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar10 != 0);
        }
        puVar3 = (undefined8 *)FUN_00d59724(param_4,lVar7,3);
LAB_0144ad58:
        plVar5 = (long *)(*(code *)*puVar3)(param_4,puVar3[1]);
        if (plVar5 == (long *)0x0) goto LAB_0144adc4;
        if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)StringLiteral_7349 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c();
        }
        puVar6 = (undefined4 *)thunk_FUN_00d624a0();
        puVar9 = puVar6 + 1;
        puVar11 = puVar6 + 2;
        puVar13 = puVar6 + 3;
      }
      else {
        puVar6 = (undefined4 *)(param_2 + 0x10);
        puVar9 = (undefined4 *)(param_2 + 0x14);
        puVar11 = (undefined4 *)(param_2 + 0x18);
        puVar13 = (undefined4 *)(param_2 + 0x1c);
      }
      FUN_0267da4c(*puVar6,*puVar9,*puVar11,*puVar13,param_3,uVar4,0);
      return;
    }
  }
LAB_0144adc4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


