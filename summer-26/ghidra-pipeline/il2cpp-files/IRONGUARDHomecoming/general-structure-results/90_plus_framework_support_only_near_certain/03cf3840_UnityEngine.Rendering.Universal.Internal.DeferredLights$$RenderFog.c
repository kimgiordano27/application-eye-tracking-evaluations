/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.DeferredLights$$RenderFog
ENTRY_POINT: 03cf3840
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03cf3b90) */

long UnityEngine_Rendering_Universal_Internal_DeferredLights__RenderFog
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long in_x9;
  ulong uVar9;
  int *in_x10;
  int *piVar10;
  long *unaff_x21;
  long *unaff_x22;
  long lVar11;
  long lVar12;
  long unaff_x29;
  long *in_stack_00000000;
  long *in_stack_00000010;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar4 = (undefined8 *)(param_1 + (long)in_x10[4] * 0x10 + 0x138);
      goto LAB_03cf3864;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_03cf3864:
  plVar5 = (long *)(*(code *)*puVar4)();
  puVar2 = PTR_DAT_04572820;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar7 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03cf38d4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_03cf38d4:
    uVar9 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar5 == (long *)0x0) goto LAB_03cf39d4;
      lVar7 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 == 0) goto LAB_03cf39ac;
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03cf3930;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_03cf3930:
    uVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if (*unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar6,uVar6);
    }
    lVar7 = *(long *)(*unaff_x21 + 0x48);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(0,uVar6);
    }
    FUN_025d9620(lVar7,uVar6,*(undefined8 *)PTR_DAT_04571910);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03cf39c8;
    }
  }
LAB_03cf39ac:
  puVar4 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03cf39c8:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_03cf39d4:
  if ((*in_stack_00000000 != 0) &&
     (plVar5 = *(long **)(*in_stack_00000000 + 0x10), plVar5 != (long *)0x0)) {
    lVar7 = *plVar5;
    lVar11 = *in_stack_00000010;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x22) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0xd) * 0x10 + 0x138);
          goto LAB_03cf3a3c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*unaff_x22,0xd);
LAB_03cf3a3c:
    (*(code *)*puVar4)(plVar5,lVar11,puVar4[1]);
    lVar7 = *in_stack_00000010;
    if (lVar7 != 0) {
      uVar9 = 0;
      do {
        if ((long)(int)*(uint *)(lVar7 + 0x18) <= (long)uVar9) {
          lVar7 = *(long *)(unaff_x29 + 0x50);
          *(undefined8 *)(unaff_x29 + 0x48) = DAT_00c8e838;
          uVar6 = thunk_FUN_01f117cc(*(undefined8 *)
                                      Method_UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>__ctor__
                                    );
          FUN_02e628e0();
          if (lVar7 != 0) {
            puVar4 = (undefined8 *)(lVar7 + 0x40);
            *puVar4 = uVar6;
            thunk_FUN_01f51358(puVar4,uVar6);
            return *unaff_x21;
          }
          break;
        }
        if (*in_stack_00000000 == 0) break;
        if (*(uint *)(lVar7 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        plVar5 = *(long **)(*in_stack_00000000 + 0x10);
        if (plVar5 == (long *)0x0) break;
        lVar11 = *plVar5;
        lVar12 = *unaff_x21;
        uVar6 = *(undefined8 *)(lVar7 + uVar9 * 8 + 0x20);
        uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x22) {
              puVar4 = (undefined8 *)(lVar11 + (long)(*piVar10 + 0xc) * 0x10 + 0x138);
              goto LAB_03cf3ad8;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*unaff_x22,0xc);
LAB_03cf3ad8:
        uVar3 = (*(code *)*puVar4)(plVar5,uVar6,puVar4[1]);
        if (lVar12 == 0) break;
        uVar9 = uVar9 + 1;
        FUN_03cf43b8(lVar12,uVar9 & 0xffffffff,uVar3 & 1);
        lVar7 = *in_stack_00000010;
      } while (lVar7 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


