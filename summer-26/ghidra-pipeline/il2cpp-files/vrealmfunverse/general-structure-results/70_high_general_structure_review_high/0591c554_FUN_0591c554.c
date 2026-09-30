/*
FUNCTION_NAME: FUN_0591c554
ENTRY_POINT: 0591c554
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0591c874) */

void FUN_0591c554(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long local_38;
  
  puVar1 = 
  Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<HelpBoxMessageType>_set_defaultValue__
  ;
  if ((DAT_066d35fa & 1) == 0) {
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<ActivateEventArgs>_AddListener__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<Plane>_GetSubArray__);
    FUN_02b3c81c(PTR_DAT_06312f78);
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<ActivateEventArgs>_Invoke__);
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<HelpBoxMessageType>_set_defaultValue__
                );
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<ActivateEventArgs>_RemoveListener__);
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<AutoGun>__ctor__);
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<AutoGun>_AddListener__);
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<AutoGun>_Invoke__);
    DAT_066d35fa = 1;
  }
  lVar2 = *(long *)puVar1;
  local_38 = 0;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x98);
  if ((lVar2 == 0) || (param_2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  plVar3 = (long *)FUN_032fab48(param_2,*(undefined8 *)(lVar2 + 0x20),&local_38,lVar2,
                                *(undefined8 *)
                                 Method_UnityEngine_Events_UnityEvent<AutoGun>_Invoke__,0x392,
                                *(undefined8 *)
                                 Method_UnityEngine_Events_UnityEvent<ActivateEventArgs>_RemoveListener__
                               );
  if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  *(undefined8 *)(local_38 + 0x10) = param_1;
  thunk_FUN_02bb0e9c((undefined8 *)(local_38 + 0x10),param_1);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar2 = *plVar3;
  uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<Plane>_GetSubArray__) {
        puVar4 = (undefined8 *)(lVar2 + (long)(*piVar7 + 0xb) * 0x10 + 0x138);
        goto LAB_0591c6d0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_02b7654c(plVar3,*(long *)Method_Unity_Collections_NativeArray<Plane>_GetSubArray__,
                        0xb);
LAB_0591c6d0:
  (*(code *)*puVar4)(plVar3,0,puVar4[1]);
  puVar1 = Method_UnityEngine_Events_UnityEvent<AutoGun>_AddListener__;
  lVar2 = *(long *)Method_UnityEngine_Events_UnityEvent<AutoGun>_AddListener__;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar2 = *(long *)puVar1;
  }
  puVar4 = *(undefined8 **)(lVar2 + 0xb8);
  lVar8 = puVar4[1];
  if (lVar8 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar4 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar9 = *puVar4;
    lVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                Method_UnityEngine_Events_UnityEvent<ActivateEventArgs>_AddListener__
                              );
    FUN_03e026bc(lVar8,uVar9,*(undefined8 *)Method_UnityEngine_Events_UnityEvent<AutoGun>__ctor__,0)
    ;
    plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar5 = lVar8;
    thunk_FUN_02bb0e9c(plVar5,lVar8);
  }
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar2 = *plVar3;
  lVar10 = *(long *)Method_UnityEngine_Events_UnityEvent<ActivateEventArgs>_Invoke__;
  uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)(lVar10 + 0x20)) {
        lVar2 = lVar2 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar10 + 0x50)) * 0x10 + 0x138;
        goto LAB_0591c7c4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  lVar2 = FUN_02b7654c(plVar3);
LAB_0591c7c4:
  lVar2 = thunk_FUN_02b5b75c(*(undefined8 *)(lVar2 + 8),lVar10);
  (**(code **)(lVar2 + 8))(plVar3,lVar8,lVar2);
  if (plVar3 != (long *)0x0) {
    lVar2 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
                    /* try { // try from 0591c814 to 05a1c9a7 has its CatchHandler @ 0591c814
                       catch() { ... } // from try @ 0591c814 with catch @ 0591c814
                       catch() { ... } // from try @ 0591c9e4 with catch @ 0591c814
                       catch() { ... } // from try @ 0591cae8 with catch @ 0591c814
                       catch() { ... } // from try @ 0591cb40 with catch @ 0591c814
                       catch() { ... } // from try @ 0591cb88 with catch @ 0591c814
                       catch() { ... } // from try @ 0591cbb0 with catch @ 0591c814
                       catch() { ... } // from try @ 0591cbd8 with catch @ 0591c814
                       catch() { ... } // from try @ 0591cc04 with catch @ 0591c814 */
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06312f78) {
          puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0591c848;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02b7654c(plVar3,*(long *)PTR_DAT_06312f78,0);
LAB_0591c848:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  return;
}


