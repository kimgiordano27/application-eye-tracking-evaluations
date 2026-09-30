/*
FUNCTION_NAME: FUN_0338b6a8
ENTRY_POINT: 0338b6a8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x0338bb08) */

void FUN_0338b6a8(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  undefined8 uVar15;
  
  if ((DAT_048321f5 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>_Remove__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<Image>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<InputField>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<OVRCameraRig>__);
    param_1 = thunk_FUN_01efb3a4(Method_System_HashCode_Add<bool>__);
    DAT_048321f5 = 1;
  }
  if (((param_3 != 0) && (param_2 != 0)) && (lVar11 = *(long *)(param_2 + 0x20), lVar11 != 0)) {
    if (*(float *)(param_3 + 0x28) < *(float *)(lVar11 + 0x18)) {
      return;
    }
    if (*(float *)(lVar11 + 0x1c) < *(float *)(param_3 + 0x28)) {
      return;
    }
    plVar5 = (long *)FUN_0338a8a8(param_1,*(undefined8 *)(param_2 + 0x10));
    if (plVar5 != (long *)0x0) {
      lVar11 = *plVar5;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)Method_UnityEngine_GameObject_GetComponent<Image>__) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0338b7dc;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(plVar5,*(long *)Method_UnityEngine_GameObject_GetComponent<Image>__,0);
LAB_0338b7dc:
      plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
      puVar4 = Method_UnityEngine_GameObject_GetComponent<InputField>__;
      puVar3 = Method_UnityEngine_Component_GetComponent<OVRCameraRig>__;
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar11 = *plVar5;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0338b85c;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_0338b85c:
        uVar12 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar12 & 1) == 0) {
          if (plVar5 == (long *)0x0) {
            return;
          }
          lVar11 = *plVar5;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 == 0) goto LAB_0338ba8c;
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_0338ba74;
        }
        lVar11 = *plVar5;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
              puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0338b8b8;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar4,0);
LAB_0338b8b8:
        uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        plVar8 = *(long **)(param_2 + 0x18);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar11 = (**(code **)(*plVar8 + 0x248))(plVar8,*(undefined8 *)(*plVar8 + 0x250));
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(long *)(lVar11 + 0x18) == 0) {
          lVar10 = *(long *)(param_2 + 0x18);
          lVar14 = *(long *)Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>_Remove__;
          lVar11 = *(long *)(lVar14 + 0x38);
          if (lVar11 == 0) {
            FUN_01ecafa0(lVar14);
            lVar11 = *(long *)(lVar14 + 0x38);
          }
          lVar11 = *(long *)(lVar11 + 0x10);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_01ecaf44();
          }
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          lVar11 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_01ecaf44();
          }
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_034b2bf4(lVar10,uVar7,**(undefined8 **)(lVar11 + 0xb8),0);
        }
        else {
          if ((int)*(long *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          plVar8 = *(long **)(lVar11 + 0x20);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar9 = (**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
          uVar15 = *(undefined8 *)puVar3;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar15 = FUN_03579868(uVar15,0);
          uVar12 = FUN_03583338(uVar9,uVar15,0);
          if (((uVar12 & 1) == 0) && (*(int *)(lVar11 + 0x18) < 3)) {
            if (*(int *)(lVar11 + 0x18) == 1) {
              lVar11 = *(long *)(param_2 + 0x18);
              plVar8 = (long *)FUN_01f08890(*(undefined8 *)
                                             Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                            ,1);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              if ((param_4 != 0) &&
                 (lVar10 = thunk_FUN_01f116d0(param_4,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)
                 ) {
                uVar7 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
                FUN_01f08910(uVar7,0);
              }
              if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              plVar8[4] = param_4;
              thunk_FUN_01f51358(plVar8 + 4,param_4);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              FUN_034b2bf4(lVar11,uVar7,plVar8,0);
            }
          }
          else {
            FUN_033a19f0(*(undefined8 *)Method_System_HashCode_Add<bool>__,0);
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_0338ba74:
    if (*(long *)(piVar13 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0338baa8;
    }
  }
LAB_0338ba8c:
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0338baa8:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}


