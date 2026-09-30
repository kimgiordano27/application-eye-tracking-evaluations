/*
FUNCTION_NAME: UnityEngine.InputSystem.Layouts.InputDeviceMatcher$$op_Inequality
ENTRY_POINT: 03a410c4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_5;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03a412dc) */

long * UnityEngine_InputSystem_Layouts_InputDeviceMatcher__op_Inequality(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  code *in_x9;
  ulong uVar10;
  int *piVar11;
  long unaff_x20;
  long *unaff_x23;
  
  plVar5 = (long *)(*in_x9)();
  puVar4 = StringLiteral_7202;
  puVar3 = Method_System_Reflection_Module_IsResource__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
                    /* catch() { ... } // from try @ 03a40ed0 with catch @ 03a410c8 */
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    do {
      lVar9 = *plVar5;
      lVar8 = *(long *)puVar2;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto UnityEngine_InputSystem_Layouts_InputDeviceMatcher__GetHashCode;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar8,0);
UnityEngine_InputSystem_Layouts_InputDeviceMatcher__GetHashCode:
      uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar10 & 1) == 0) {
        plVar7 = (long *)0x0;
        goto LAB_03a41238;
      }
      lVar9 = *plVar5;
      lVar8 = *(long *)puVar2;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_03a41194;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar8,1);
LAB_03a41194:
      plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
      if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar7);
      }
      uVar10 = thunk_FUN_0340e318(plVar7[2]);
    } while ((uVar10 & 1) == 0);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(int *)(unaff_x20 + 0x10) == 0) break;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_03a40550(plVar7);
    uVar10 = thunk_FUN_0340e318();
  } while ((uVar10 & 1) == 0);
LAB_03a41238:
  plVar5 = (long *)thunk_FUN_01f116d0(plVar5,*unaff_x23);
  if (plVar5 != (long *)0x0) {
    lVar8 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x23) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03a41298;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*unaff_x23,0);
LAB_03a41298:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  return plVar7;
}


