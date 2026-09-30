/*
FUNCTION_NAME: UnityEngine.InputSystem.Layouts.InputDeviceMatcher$$op_Equality
ENTRY_POINT: 03a41058
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03a412dc) */

long * UnityEngine_InputSystem_Layouts_InputDeviceMatcher__op_Equality
                 (ulong param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_7202);
    thunk_FUN_01efb3a4(Method_System_Reflection_Module_IsResource__);
    *(undefined1 *)(unaff_x22 + 0xc3c) = 1;
  }
  if (unaff_x19 == 0) {
    plVar6 = (long *)0x0;
  }
  else {
    plVar6 = (long *)FUN_033decb8();
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
                    /* try { // try from 03a410b4 to 03b410bf has its CatchHandler @ 03a40190 */
                    /* try { // try from 03a410c0 to 03b410c7 has its CatchHandler @ 03a410e0 */
    plVar7 = (long *)(**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
    puVar5 = StringLiteral_7202;
    puVar4 = Method_System_Reflection_Module_IsResource__;
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      do {
        lVar11 = *plVar7;
        lVar10 = *(long *)puVar3;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar10) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto UnityEngine_InputSystem_Layouts_InputDeviceMatcher__GetHashCode;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar10,0);
UnityEngine_InputSystem_Layouts_InputDeviceMatcher__GetHashCode:
        uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar12 & 1) == 0) {
          plVar6 = (long *)0x0;
          goto LAB_03a41238;
        }
        lVar11 = *plVar7;
        lVar10 = *(long *)puVar3;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar10) {
              puVar8 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_03a41194;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar10,1);
LAB_03a41194:
        plVar6 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar6);
        }
        uVar12 = thunk_FUN_0340e318(plVar6[2],param_2,0);
      } while ((uVar12 & 1) == 0);
      if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(int *)(param_3 + 0x10) == 0) break;
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar9 = FUN_03a40550(plVar6);
      uVar12 = thunk_FUN_0340e318(param_3,uVar9,0);
    } while ((uVar12 & 1) == 0);
LAB_03a41238:
    plVar7 = (long *)thunk_FUN_01f116d0(plVar7,*(undefined8 *)puVar2);
    if (plVar7 != (long *)0x0) {
      lVar11 = *plVar7;
      lVar10 = *(long *)puVar2;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar10) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_03a41298;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar10,0);
LAB_03a41298:
      (*(code *)*puVar8)(plVar7,puVar8[1]);
    }
  }
  return plVar6;
}


