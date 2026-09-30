/*
FUNCTION_NAME: Sirenix.Serialization.Utilities.WeakValueSetter<__Il2CppFullySharedGenericType>$$.ctor
ENTRY_POINT: 0283a1fc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0283a380) */

void Sirenix_Serialization_Utilities_WeakValueSetter<__Il2CppFullySharedGenericType>___ctor(void)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  thunk_FUN_01efb3a4();
  *(undefined1 *)(unaff_x21 + 0x832) = 1;
  if (unaff_x20 == (long *)0x0) {
LAB_0283a378:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_0422b6c0();
  if (unaff_x20[0x7d] != 0) {
    FUN_0422b208();
    lVar6 = unaff_x20[0x7e];
    FUN_0422b27c();
    plVar2 = (long *)FUN_024177ac(*(undefined8 *)
                                   (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28));
    if (plVar2 == (long *)0x0) goto LAB_0283a378;
    uVar3 = (**(code **)(*plVar2 + 0x1b8))
                      (plVar2,(char)lVar6 != '\0',(char)unaff_x20[0x7e],
                       *(undefined8 *)(*plVar2 + 0x1c0));
    if ((uVar3 & 1) == 0) {
      lVar1 = unaff_x20[0x7e];
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44();
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      plVar2 = (long *)FUN_029e476c((char)lVar6 != '\0',(char)lVar1 != '\0',
                                    *(undefined8 *)
                                     (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x50));
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_041d4560(plVar2);
      (**(code **)(*unaff_x20 + 0x838))();
      (**(code **)(*unaff_x20 + 0x198))();
      lVar6 = *plVar2;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto FUN_0283a358;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ecb238(plVar2,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
FUN_0283a358:
      (*(code *)*puVar5)(plVar2,puVar5[1]);
    }
  }
  return;
}


