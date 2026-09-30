/*
FUNCTION_NAME: FUN_055ad168
ENTRY_POINT: 055ad168
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_12;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


long * FUN_055ad168(long param_1,long *param_2,long *param_3,long param_4,undefined8 param_5,
                   long param_6)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  int *piVar15;
  uint uVar16;
  long *plVar17;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar2 = System_Action<LocomotionProvider>_TypeInfo;
  if ((DAT_06dbb646 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fc178);
    FUN_02d965b8(PTR_DAT_06a0ac28);
    FUN_02d965b8(UnityEngine_RectTransform_var);
                    /* try { // try from 055ad1d4 to 056ad1e3 has its CatchHandler @ 055ad1e4 */
    FUN_02d965b8(PTR_DAT_069fc268);
                    /* catch() { ... } // from try @ 055ad140 with catch @ 055ad1e4
                       catch() { ... } // from try @ 055ad1d4 with catch @ 055ad1e4 */
                    /* try { // try from 055ad1e8 to 056ad1eb has its CatchHandler @ 055ad1f4 */
    FUN_02d965b8(System_Reflection_RuntimeAssembly_var);
                    /* try { // try from 055ad1ec to 056ad1f7 has its CatchHandler @ 055acb7c */
                    /* catch() { ... } // from try @ 055ad118 with catch @ 055ad1f4
                       catch() { ... } // from try @ 055ad1e8 with catch @ 055ad1f4 */
    FUN_02d965b8(UnityEngine_XR_Interaction_Toolkit_UI_TrackedDeviceModel_var);
    FUN_02d965b8(PTR_DAT_069ff850);
    FUN_02d965b8(System_Action<LocomotionProvider>_TypeInfo);
    FUN_02d965b8(
                System_Runtime_Serialization_ClassDataContract_ClassDataContractCriticalHelper_Member_var
                );
    FUN_02d965b8(System_Action<OVRColocationSession_Data>_TypeInfo);
    DAT_06dbb646 = 1;
  }
  uStack_70 = 0;
  local_68 = 0;
  local_78 = 0;
  local_80 = 0;
  plVar5 = (long *)thunk_FUN_02dd3048(param_2,*(undefined8 *)puVar2);
  plVar7 = param_2;
  if (plVar5 != (long *)0x0) {
    lVar11 = *plVar5;
    lVar10 = *(long *)puVar2;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
                    /* try { // try from 055ad260 to 056ad343 has its CatchHandler @ 055ad260
                       catch() { ... } // from try @ 055ad260 with catch @ 055ad260
                       catch() { ... } // from try @ 055ad460 with catch @ 055ad260
                       catch() { ... } // from try @ 055ad558 with catch @ 055ad260
                       catch() { ... } // from try @ 055ad5cc with catch @ 055ad260
                       catch() { ... } // from try @ 055ad64c with catch @ 055ad260 */
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar10) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_055ad2a0;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_02dd004c(plVar5,lVar10,0);
LAB_055ad2a0:
    plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  if (param_6 != 0) {
    FUN_055b4f70(param_1,param_3,param_6,plVar7);
  }
  FUN_055b5334(param_1,param_3,param_4,plVar7);
  if (param_3 == (long *)0x0) {
LAB_055adaa8:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
  if (param_4 == 0) goto LAB_055adaa8;
  plVar5 = (long *)(param_4 + 0xd8);
  if (*plVar5 == 0) {
    uVar8 = FUN_055ae608(param_1,*(undefined8 *)(param_4 + 200));
    *(undefined8 *)(param_4 + 0xd8) = uVar8;
    LeanTween__value(plVar5,uVar8);
  }
  if (*(long *)(param_4 + 0x90) == 0) {
    uVar8 = FUN_055ae608(param_1,*(undefined8 *)(param_4 + 0xd0));
                    /* try { // try from 055ad344 to 056ad35b has its CatchHandler @ 055ad580 */
    FUN_055a7a68(param_4,uVar8);
  }
  plVar17 = *(long **)(param_4 + 0xa0);
  if (plVar17 == (long *)0x0) {
    plVar17 = (long *)FUN_055aea4c(param_1,*(undefined8 *)(param_4 + 0x90),0,param_4,param_5);
  }
  plVar12 = (long *)*plVar5;
  if (plVar12 != (long *)0x0) {
                    /* try { // try from 055ad378 to 056ad37f has its CatchHandler @ 055ad570 */
    bVar1 = *(byte *)(*(long *)
                       System_Runtime_Serialization_ClassDataContract_ClassDataContractCriticalHelper_Member_var
                     + 0x130);
                    /* try { // try from 055ad39c to 056ad39f has its CatchHandler @ 055ad558 */
                    /* try { // try from 055ad3a4 to 056ad3cf has its CatchHandler @ 055ad594 */
    if ((bVar1 <= *(byte *)(*plVar12 + 0x130)) &&
       (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)
         System_Runtime_Serialization_ClassDataContract_ClassDataContractCriticalHelper_Member_var))
    {
      uVar16 = *(uint *)((long)plVar12 + 0x8c) & 0xfffffffe;
      goto LAB_055ad3b0;
    }
  }
  uVar16 = 0;
LAB_055ad3b0:
  do {
    iVar3 = (**(code **)(*param_3 + 0x188))(param_3,*(undefined8 *)(*param_3 + 400));
    if (iVar3 == 4) {
                    /* try { // try from 055ad3dc to 056ad3e7 has its CatchHandler @ 055ad56c */
      plVar12 = (long *)(**(code **)(*param_3 + 0x198))(param_3,*(undefined8 *)(*param_3 + 0x1a0));
      if (plVar12 == (long *)0x0) goto LAB_055adaa8;
                    /* try { // try from 055ad3f0 to 056ad3fb has its CatchHandler @ 055ad568 */
      uVar8 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
                    /* try { // try from 055ad400 to 056ad40b has its CatchHandler @ 055ad59c */
      uVar13 = FUN_055afb58(param_1,param_3,uVar8);
      if ((uVar13 & 1) == 0) {
        if (uVar16 == 0x1c) {
          uVar8 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
                    /* try { // try from 055ad4b0 to 056ad4cf has its CatchHandler @ 055ad57c */
          lVar10 = param_3[0xc];
          uVar9 = FUN_055712a0(param_3,0);
          if (*(int *)(*(long *)UnityEngine_RectTransform_var + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
                    /* try { // try from 055ad4e0 to 056ad4eb has its CatchHandler @ 055ad55c */
          uVar13 = FUN_0558d8a0(uVar8,lVar10,uVar9,&local_78,0);
                    /* try { // try from 055ad4f8 to 056ad517 has its CatchHandler @ 055ad560 */
          if ((uVar13 & 1) == 0) {
            if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar8 = FUN_0547e2f8(0);
            uVar8 = FUN_055b0cf8(uVar8,param_3,plVar12,uVar8,*(undefined8 *)(param_4 + 0xd8),
                                 *(undefined8 *)(param_4 + 200));
          }
          else {
            uStack_a8 = uStack_70;
            local_b0 = local_78;
            uVar8 = thunk_FUN_02dd2d7c(*(undefined8 *)PTR_DAT_06a0ac28,&local_b0);
          }
        }
        else if (uVar16 == 0x1a) {
          uVar8 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
                    /* try { // try from 055ad42c to 056ad42f has its CatchHandler @ 055ad598 */
          lVar10 = param_3[9];
          lVar11 = param_3[0xc];
                    /* try { // try from 055ad434 to 056ad43f has its CatchHandler @ 055ad588 */
          uVar9 = FUN_055712a0(param_3,0);
                    /* try { // try from 055ad444 to 056ad44f has its CatchHandler @ 055ad584 */
                    /* try { // try from 055ad454 to 056ad45f has its CatchHandler @ 055ad59c */
          if (*(int *)(*(long *)UnityEngine_RectTransform_var + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
                    /* try { // try from 055ad460 to 056ad497 has its CatchHandler @ 055ad260 */
          uVar13 = FUN_0558d190(uVar8,(int)lVar10,lVar11,uVar9,&local_68,0);
          if ((uVar13 & 1) == 0) {
            if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar8 = FUN_0547e2f8(0);
            uVar8 = FUN_055b0cf8(uVar8,param_3,plVar12,uVar8,*(undefined8 *)(param_4 + 0xd8),
                                 *(undefined8 *)(param_4 + 200));
          }
          else {
            local_b0 = local_68;
                    /* try { // try from 055ad498 to 056ad4a3 has its CatchHandler @ 055ad564 */
            uVar8 = thunk_FUN_02dd2d7c(*(undefined8 *)PTR_DAT_069fc268,&local_b0);
          }
        }
        else {
          lVar10 = *plVar5;
          if ((lVar10 == 0) || (*(char *)(lVar10 + 0x12) == '\0')) {
            if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar8 = FUN_0547e2f8(0);
            uVar8 = FUN_055b0cf8(uVar8,param_3,plVar12,uVar8,*(undefined8 *)(param_4 + 0xd8),
                                 *(undefined8 *)(param_4 + 200));
          }
          else {
                    /* try { // try from 055ad534 to 056ad53b has its CatchHandler @ 055ad580 */
            if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            plVar14 = *(long **)(*(long *)(param_1 + 0x20) + 0x40);
            if (plVar14 == (long *)0x0) {
Oculus_Platform_CAPI_ovrKeyValuePair___ctor:
              lVar11 = 0;
            }
            else {
                    /* try { // try from 055ad544 to 056ad547 has its CatchHandler @ 055ad574 */
                    /* try { // try from 055ad548 to 056ad54b has its CatchHandler @ 055ad590 */
                    /* try { // try from 055ad54c to 056ad54f has its CatchHandler @ 055ad58c */
                    /* try { // try from 055ad550 to 056ad553 has its CatchHandler @ 055ad598 */
                    /* try { // try from 055ad554 to 056ad557 has its CatchHandler @ 055ad578 */
              bVar1 = *(byte *)(*(long *)System_Reflection_RuntimeAssembly_var + 0x130);
                    /* catch() { ... } // from try @ 055ad39c with catch @ 055ad558
                       try { // try from 055ad558 to 056ad5b3 has its CatchHandler @ 055ad260 */
                    /* catch() { ... } // from try @ 055ad4e0 with catch @ 055ad55c */
                    /* catch() { ... } // from try @ 055ad4f8 with catch @ 055ad560 */
                    /* catch() { ... } // from try @ 055ad498 with catch @ 055ad564 */
                    /* catch() { ... } // from try @ 055ad3f0 with catch @ 055ad568 */
                    /* catch() { ... } // from try @ 055ad3dc with catch @ 055ad56c */
                    /* catch() { ... } // from try @ 055ad378 with catch @ 055ad570 */
              if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)System_Reflection_RuntimeAssembly_var))
              goto Oculus_Platform_CAPI_ovrKeyValuePair___ctor;
              lVar11 = plVar14[6];
            }
            uVar9 = *(undefined8 *)(lVar10 + 0x18);
            uVar8 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
            if (*(int *)(*(long *)UnityEngine_XR_Interaction_Toolkit_UI_TrackedDeviceModel_var +
                        0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar8 = FUN_05590d40(uVar9,lVar11,uVar8,0,0);
          }
        }
        uVar13 = FUN_05574ae8(param_3,*(undefined8 *)(param_4 + 0x90),plVar17 != (long *)0x0,0);
        if ((uVar13 & 1) == 0) {
          uVar8 = thunk_FUN_02dfd288(System_Action<OVRColocationSession_Data>_TypeInfo);
          uVar8 = FUN_05574a94(param_3,uVar8,0);
          uVar9 = thunk_FUN_02dfd288(System_Action<OVRHand_MicrogestureType>_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar8,uVar9);
        }
        if (plVar17 == (long *)0x0) {
LAB_055ad6c8:
          uVar9 = FUN_055aeed0(param_1,param_3,*(undefined8 *)(param_4 + 0xd0),
                               *(undefined8 *)(param_4 + 0x90),0,param_4,param_5,0);
        }
        else {
          uVar13 = (**(code **)(*plVar17 + 0x1a8))(plVar17,*(undefined8 *)(*plVar17 + 0x1b0));
          if ((uVar13 & 1) == 0) goto LAB_055ad6c8;
          uVar9 = FUN_055aeab8(param_1,plVar17,param_3,*(undefined8 *)(param_4 + 0xd0),0);
        }
        if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar10 = *param_2;
        uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_069ff850) {
              puVar6 = (undefined8 *)(lVar10 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_055ad74c;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar6 = (undefined8 *)FUN_02dd004c(param_2,*(long *)PTR_DAT_069ff850,1);
LAB_055ad74c:
        (*(code *)*puVar6)(param_2,uVar8,uVar9,puVar6[1]);
      }
    }
    else if (iVar3 != 5) {
      if (iVar3 != 0xd) {
        FUN_02979e58(param_3);
        uVar4 = (**(code **)(*param_3 + 0x188))(param_3,*(undefined8 *)(*param_3 + 400));
        local_b0 = thunk_FUN_02dfd288(System_Drawing_Point_var);
        uStack_a8 = 0xffffffffffffffff;
        local_a0 = uVar4;
        uVar8 = FUN_0551e574(&local_b0,0);
        uVar9 = thunk_FUN_02dfd288(System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo);
        uVar8 = FUN_05362cb4(uVar9,uVar8,0);
        uVar8 = FUN_05574a94(param_3,uVar8,0);
        uVar9 = thunk_FUN_02dfd288(System_Action<OVRHand_MicrogestureType>_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar8,uVar9);
      }
      goto LAB_055ada64;
    }
    uVar13 = (**(code **)(*param_3 + 0x1d8))(param_3,*(undefined8 *)(*param_3 + 0x1e0));
  } while ((uVar13 & 1) != 0);
  FUN_055b578c(param_1,param_3,param_4,plVar7,
               *(undefined8 *)System_Action<OVRColocationSession_Data>_TypeInfo);
LAB_055ada64:
  FUN_055b5560(param_1,param_3,param_4,plVar7);
  return plVar7;
}


