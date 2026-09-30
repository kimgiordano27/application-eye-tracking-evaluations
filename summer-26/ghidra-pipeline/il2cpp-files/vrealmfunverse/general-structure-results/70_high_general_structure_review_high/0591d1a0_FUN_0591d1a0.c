/*
FUNCTION_NAME: FUN_0591d1a0
ENTRY_POINT: 0591d1a0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_6;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0591d5d4) */

void FUN_0591d1a0(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  int *piVar10;
  undefined8 uVar11;
  float fVar12;
  long local_48;
  
  if ((DAT_066d35fd & 1) == 0) {
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<Color>_Invoke__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<Plane>_GetSubArray__);
    FUN_02b3c81c(PTR_DAT_06312f78);
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<CustomAutoGun>__ctor__);
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<CustomAutoGun>_AddListener__);
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<HelpBoxMessageType>_set_defaultValue__
                );
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<CustomAutoGun>_Invoke__);
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<CustomAutoGun>_RemoveListener__);
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<AutoGun>_AddListener__);
    FUN_02b3c81c(Method_System_Collections_Generic_List<WeakReference>_Clear__);
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<AutoGun>_Invoke__);
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<CustomLauncherGun>__ctor__);
    DAT_066d35fd = 1;
  }
  local_48 = 0;
  if (((*(long *)(param_1 + 0x138) != 0) &&
      (lVar3 = FUN_0590661c(*(long *)(param_1 + 0x138),
                            *(undefined8 *)
                             Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__
                           ), lVar3 != 0)) && (*(long *)(lVar3 + 0x1a0) != 0)) {
    uVar4 = FUN_057ec748(*(long *)(lVar3 + 0x1a0),0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    if (*(int *)(*(long *)Method_System_Collections_Generic_List<WeakReference>_Clear__ + 0xe4) == 0
       ) {
      thunk_FUN_02b9ad44();
    }
    fVar12 = (float)FUN_057f2cd4(0);
    lVar5 = FUN_059254f4(lVar3,0);
    puVar2 = Method_UnityEngine_Events_UnityEvent<CustomAutoGun>_AddListener__;
    if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<CustomAutoGun>_AddListener__ + 0xe4)
        == 0) {
      thunk_FUN_02b9ad44(*(long *)Method_UnityEngine_Events_UnityEvent<CustomAutoGun>_AddListener__)
      ;
    }
    if (DAT_066d3621 == '\0') {
      FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<CustomAutoGun>_AddListener__);
      DAT_066d3621 = '\x01';
    }
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar6 = *(long *)puVar2;
    }
    puVar2 = 
    Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<HelpBoxMessageType>_set_defaultValue__
    ;
    if (lVar5 != 0) {
      iVar1 = *(int *)(*(long *)
                        Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<HelpBoxMessageType>_set_defaultValue__
                      + 0xe4);
      *(bool *)(lVar5 + 0x747) = fVar12 == 1.0 || *(char *)(*(long *)(lVar6 + 0xb8) + 8) == '\0';
      if (iVar1 == 0) {
        thunk_FUN_02b9ad44();
      }
      if (param_2 != 0) {
        plVar7 = (long *)FUN_032fa71c(param_2,*(undefined8 *)
                                               Method_UnityEngine_Events_UnityEvent<CustomLauncherGun>__ctor__
                                      ,&local_48,
                                      *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x88),
                                      *(undefined8 *)
                                       Method_UnityEngine_Events_UnityEvent<AutoGun>_Invoke__,0x469,
                                      *(undefined8 *)
                                       Method_UnityEngine_Events_UnityEvent<CustomAutoGun>_Invoke__)
        ;
        if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        *(long *)(local_48 + 0x10) = lVar3;
        thunk_FUN_02bb0e9c((long *)(local_48 + 0x10),lVar3);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar3 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<Plane>_GetSubArray__) {
              puVar8 = (undefined8 *)(lVar3 + (long)(*piVar10 + 0xc) * 0x10 + 0x138);
              goto LAB_0591d42c;
            }
            uVar4 = uVar4 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar4 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_02b7654c(plVar7,*(long *)
                                      Method_Unity_Collections_NativeArray<Plane>_GetSubArray__,0xc)
        ;
LAB_0591d42c:
        (*(code *)*puVar8)(plVar7,1,puVar8[1]);
        puVar2 = Method_UnityEngine_Events_UnityEvent<AutoGun>_AddListener__;
        lVar3 = *(long *)Method_UnityEngine_Events_UnityEvent<AutoGun>_AddListener__;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar3 = *(long *)puVar2;
        }
        puVar8 = *(undefined8 **)(lVar3 + 0xb8);
        lVar5 = puVar8[4];
        if (lVar5 == 0) {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            puVar8 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
          }
          uVar11 = *puVar8;
          lVar5 = thunk_FUN_02b79644(*(undefined8 *)
                                      Method_UnityEngine_Events_UnityEvent<Color>_Invoke__);
          FUN_03e02810(lVar5,uVar11,
                       *(undefined8 *)
                        Method_UnityEngine_Events_UnityEvent<CustomAutoGun>_RemoveListener__,0);
          plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
          *plVar9 = lVar5;
          thunk_FUN_02bb0e9c(plVar9,lVar5);
        }
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar3 = *plVar7;
        lVar6 = *(long *)Method_UnityEngine_Events_UnityEvent<CustomAutoGun>__ctor__;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)(lVar6 + 0x20)) {
              lVar3 = lVar3 + (long)(int)(*piVar10 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138
              ;
              goto LAB_0591d520;
            }
            uVar4 = uVar4 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar4 != 0);
        }
        lVar3 = FUN_02b7654c(plVar7);
LAB_0591d520:
        lVar3 = thunk_FUN_02b5b75c(*(undefined8 *)(lVar3 + 8),lVar6);
        (**(code **)(lVar3 + 8))(plVar7,lVar5,lVar3);
        if (plVar7 == (long *)0x0) {
          return;
        }
        lVar3 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06312f78) {
              puVar8 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0591d5a4;
            }
            uVar4 = uVar4 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar4 != 0);
        }
        puVar8 = (undefined8 *)FUN_02b7654c(plVar7,*(long *)PTR_DAT_06312f78,0);
LAB_0591d5a4:
        (*(code *)*puVar8)(plVar7,puVar8[1]);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


