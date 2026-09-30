/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Member$$RegisterGizmo
ENTRY_POINT: 0144aa0c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Member__RegisterGizmo
               (ulong param_1,undefined1 param_2 [16],float param_3,float param_4,float param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(System_Func<Vector3,_float>_TypeInfo);
    *(undefined1 *)(unaff_x22 + 0xa5b) = 1;
  }
  puVar2 = System_Func<Vector3,_float>_TypeInfo;
  if (unaff_x21 != (long *)0x0) {
    lVar4 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)System_Func<Vector3,_float>_TypeInfo) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0144aa7c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_00d59724();
LAB_0144aa7c:
    (*(code *)*puVar3)();
    if (unaff_x20 != 0) {
      uVar5 = FUN_0267e21c();
      if ((uVar5 & 1) != 0) {
        lVar4 = *unaff_x21;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0144aaec;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_00d59724();
LAB_0144aaec:
        (*(code *)*puVar3)();
        fVar7 = (float)FUN_0267d928();
        fVar8 = (float)*(int *)(unaff_x19 + 0x20);
        iVar1 = *(int *)(unaff_x19 + 0x20) + 1;
        fVar9 = (float)iVar1;
        *(ulong *)(unaff_x19 + 0x18) =
             CONCAT44(((float)((ulong)*(undefined8 *)(unaff_x19 + 0x18) >> 0x20) * fVar8) / fVar9 +
                      param_5 / fVar9,
                      ((float)*(undefined8 *)(unaff_x19 + 0x18) * fVar8) / fVar9 + param_4 / fVar9);
        *(ulong *)(unaff_x19 + 0x10) =
             CONCAT44(((float)((ulong)*(undefined8 *)(unaff_x19 + 0x10) >> 0x20) * fVar8) / fVar9 +
                      param_3 / fVar9,
                      ((float)*(undefined8 *)(unaff_x19 + 0x10) * fVar8) / fVar9 + fVar7 / fVar9);
        *(int *)(unaff_x19 + 0x20) = iVar1;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


