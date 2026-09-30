/*
FUNCTION_NAME: FUN_0591c8d8
ENTRY_POINT: 0591c8d8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0591ccfc) */

void FUN_0591c8d8(long param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  long local_40;
  long *local_38;
  
  if ((DAT_066d35fb & 1) == 0) {
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<AutoGun>_RemoveListener__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_textInputBase__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<Plane>_GetSubArray__);
    FUN_02b3c81c(PTR_DAT_06312f78);
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<BaseEventData>__ctor__);
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<HelpBoxMessageType>_set_defaultValue__
                );
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<BaseEventData>_Invoke__);
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<bool>__ctor__);
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<AutoGun>_AddListener__);
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<bool>_AddListener__);
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<AutoGun>_Invoke__);
    DAT_066d35fb = 1;
  }
  local_40 = 0;
  local_38 = (long *)0x0;
  if (*(long *)(param_1 + 0x138) != 0) {
                    /* try { // try from 0591c9a8 to 05a1c9af has its CatchHandler @ 0591cb68 */
    uVar4 = FUN_0590661c(*(long *)(param_1 + 0x138),
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_textInputBase__
                        );
                    /* try { // try from 0591c9bc to 05a1c9c7 has its CatchHandler @ 0591cb64 */
                    /* try { // try from 0591c9cc to 05a1c9db has its CatchHandler @ 0591cb5c */
    if ((*(long *)(param_1 + 0x138) != 0) &&
       (lVar5 = FUN_0590661c(*(long *)(param_1 + 0x138),
                             *(undefined8 *)
                              Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__
                            ),
       puVar1 = 
       Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<HelpBoxMessageType>_set_defaultValue__
       , lVar5 != 0)) {
                    /* try { // try from 0591c9dc to 05a1c9e3 has its CatchHandler @ 0591cb60 */
      lVar10 = *(long *)(lVar5 + 0x1a0);
                    /* try { // try from 0591c9e4 to 05a1ca4b has its CatchHandler @ 0591c814 */
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<HelpBoxMessageType>_set_defaultValue__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if (param_2 != 0) {
        local_38 = (long *)FUN_032fab48(param_2,*(undefined8 *)
                                                 Method_UnityEngine_Events_UnityEvent<bool>_AddListener__
                                        ,&local_40,
                                        *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48),
                                        *(undefined8 *)
                                         Method_UnityEngine_Events_UnityEvent<AutoGun>_Invoke__,
                                        0x3b8,*(undefined8 *)
                                               Method_UnityEngine_Events_UnityEvent<BaseEventData>_Invoke__
                                       );
                    /* try { // try from 0591ca4c to 05a1ca53 has its CatchHandler @ 0591cbb8 */
        if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        *(undefined8 *)(local_40 + 0x18) = *(undefined8 *)(lVar5 + 0xd8);
        thunk_FUN_02bb0e9c();
                    /* try { // try from 0591ca60 to 05a1ca67 has its CatchHandler @ 0591cbb4 */
        if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        *(undefined8 *)(local_40 + 0x10) = uVar4;
        thunk_FUN_02bb0e9c((undefined8 *)(local_40 + 0x10),uVar4);
        lVar5 = local_40;
        if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
                    /* try { // try from 0591ca78 to 05a1ca7f has its CatchHandler @ 0591cb50 */
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        uVar6 = FUN_057ec748(lVar10,0);
        lVar11 = local_40;
        uVar3 = 1;
        if ((uVar6 & 1) != 0) {
          uVar3 = 2;
        }
        *(undefined4 *)(lVar5 + 0x20) = uVar3;
        if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        uVar6 = FUN_057ec748(lVar10,0);
        if ((uVar6 & 1) == 0) {
          uVar3 = 1;
        }
        else {
          uVar3 = FUN_057ede30(lVar10,0);
        }
                    /* try { // try from 0591cac4 to 05a1cae7 has its CatchHandler @ 0591cb44 */
        lVar5 = local_40;
        *(undefined4 *)(lVar11 + 0x24) = uVar3;
        if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        *(undefined4 *)(local_40 + 0x28) = *(undefined4 *)(lVar10 + 0x2c);
        uVar6 = FUN_057ec748(lVar10,0);
                    /* try { // try from 0591cae8 to 05a1cb2f has its CatchHandler @ 0591c814 */
        if ((uVar6 & 1) == 0) {
          lVar10 = 0;
        }
        *(long *)(lVar5 + 0x30) = lVar10;
        thunk_FUN_02bb0e9c((long *)(lVar5 + 0x30));
        plVar2 = local_38;
        if (local_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar5 = *local_38;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<Plane>_GetSubArray__) {
                    /* catch() { ... } // from try @ 0591cb3c with catch @ 0591cb48 */
                    /* catch() { ... } // from try @ 0591cb38 with catch @ 0591cb4c */
                    /* catch() { ... } // from try @ 0591ca78 with catch @ 0591cb50 */
                    /* catch() { ... } // from try @ 0591cb34 with catch @ 0591cb54 */
              puVar7 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xb) * 0x10 + 0x138);
              goto LAB_0591cb58;
            }
            uVar6 = uVar6 - 1;
                    /* try { // try from 0591cb30 to 05a1cb33 has its CatchHandler @ 0591cb58 */
            piVar9 = piVar9 + 4;
                    /* try { // try from 0591cb34 to 05a1cb37 has its CatchHandler @ 0591cb54 */
          } while (uVar6 != 0);
        }
                    /* try { // try from 0591cb38 to 05a1cb3b has its CatchHandler @ 0591cb4c */
                    /* try { // try from 0591cb3c to 05a1cb3f has its CatchHandler @ 0591cb48 */
                    /* try { // try from 0591cb40 to 05a1cb83 has its CatchHandler @ 0591c814 */
        puVar7 = (undefined8 *)
                 FUN_02b7654c(local_38,*(long *)
                                        Method_Unity_Collections_NativeArray<Plane>_GetSubArray__,
                              0xb);
                    /* catch() { ... } // from try @ 0591cac4 with catch @ 0591cb44 */
LAB_0591cb58:
                    /* catch() { ... } // from try @ 0591cb30 with catch @ 0591cb58 */
                    /* catch() { ... } // from try @ 0591c9cc with catch @ 0591cb5c */
                    /* catch() { ... } // from try @ 0591c9dc with catch @ 0591cb60 */
                    /* catch() { ... } // from try @ 0591c9bc with catch @ 0591cb64 */
        (*(code *)*puVar7)(plVar2,0,puVar7[1]);
        plVar2 = local_38;
        puVar1 = Method_UnityEngine_Events_UnityEvent<AutoGun>_AddListener__;
                    /* catch() { ... } // from try @ 0591c9a8 with catch @ 0591cb68 */
        lVar5 = *(long *)Method_UnityEngine_Events_UnityEvent<AutoGun>_AddListener__;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
                    /* try { // try from 0591cb84 to 05a1cb87 has its CatchHandler @ 0591cba4 */
          lVar5 = *(long *)puVar1;
        }
                    /* try { // try from 0591cb88 to 05a1cba7 has its CatchHandler @ 0591c814 */
        puVar7 = *(undefined8 **)(lVar5 + 0xb8);
        lVar10 = puVar7[2];
        if (lVar10 == 0) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
                    /* catch() { ... } // from try @ 0591cb84 with catch @ 0591cba4 */
            puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
          }
                    /* try { // try from 0591cba8 to 05a1cbaf has its CatchHandler @ 0591cc0c */
                    /* try { // try from 0591cbb0 to 05a1cbd3 has its CatchHandler @ 0591c814 */
          uVar4 = *puVar7;
                    /* catch() { ... } // from try @ 0591ca60 with catch @ 0591cbb4 */
                    /* catch() { ... } // from try @ 0591ca4c with catch @ 0591cbb8 */
          lVar10 = thunk_FUN_02b79644(*(undefined8 *)
                                       Method_UnityEngine_Events_UnityEvent<AutoGun>_RemoveListener__
                                     );
                    /* try { // try from 0591cbd4 to 05a1cbd7 has its CatchHandler @ 0591cbf8 */
          FUN_03e026bc(lVar10,uVar4,
                       *(undefined8 *)Method_UnityEngine_Events_UnityEvent<bool>__ctor__,0);
                    /* try { // try from 0591cbd8 to 05a1cbfb has its CatchHandler @ 0591c814 */
          plVar8 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
          *plVar8 = lVar10;
          thunk_FUN_02bb0e9c(plVar8,lVar10);
        }
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
                    /* catch() { ... } // from try @ 0591cbd4 with catch @ 0591cbf8 */
        lVar5 = *plVar2;
                    /* try { // try from 0591cbfc to 05a1cc03 has its CatchHandler @ 0591cc0c */
        lVar11 = *(long *)Method_UnityEngine_Events_UnityEvent<BaseEventData>__ctor__;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* try { // try from 0591cc04 to 05a1cc0f has its CatchHandler @ 0591c814 */
                    /* catch() { ... } // from try @ 0591cba8 with catch @ 0591cc0c
                       catch() { ... } // from try @ 0591cbfc with catch @ 0591cc0c */
        if (uVar6 != 0) {
                    /* try { // try from 0591cc10 to 05a1ccd7 has its CatchHandler @ 0591cc10
                       catch() { ... } // from try @ 0591cc10 with catch @ 0591cc10
                       catch() { ... } // from try @ 0591ccf0 with catch @ 0591cc10
                       catch() { ... } // from try @ 0591cd4c with catch @ 0591cc10
                       catch() { ... } // from try @ 0591cd70 with catch @ 0591cc10 */
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)(lVar11 + 0x20)) {
              lVar5 = lVar5 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar11 + 0x50)) * 0x10 + 0x138
              ;
              goto LAB_0591cc4c;
            }
            uVar6 = uVar6 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar6 != 0);
        }
        lVar5 = FUN_02b7654c(plVar2);
LAB_0591cc4c:
        lVar5 = thunk_FUN_02b5b75c(*(undefined8 *)(lVar5 + 8),lVar11);
        (**(code **)(lVar5 + 8))(plVar2,lVar10,lVar5);
        plVar2 = local_38;
        if (local_38 != (long *)0x0) {
          lVar5 = *local_38;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06312f78) {
                puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_0591ccd0;
              }
              uVar6 = uVar6 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)FUN_02b7654c(local_38,*(long *)PTR_DAT_06312f78,0);
LAB_0591ccd0:
                    /* try { // try from 0591ccd8 to 05a1ccdf has its CatchHandler @ 0591cd2c */
          (*(code *)*puVar7)(plVar2,puVar7[1]);
        }
                    /* try { // try from 0591cce8 to 05a1ccef has its CatchHandler @ 0591cd28 */
                    /* try { // try from 0591ccf0 to 05a1cd47 has its CatchHandler @ 0591cc10 */
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


