/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxTextureSize
ENTRY_POINT: 03394c78
PROGRAM: gunraiders-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_65_0__ovrp_KtxTextureSize(undefined **param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  int *piVar11;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  int unaff_w24;
  undefined4 unaff_w25;
  long *unaff_x26;
  long unaff_x27;
  undefined8 unaff_x28;
  long lVar12;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  do {
                    /* try { // try from 03394c7c to 03494c7f has its CatchHandler @ 03394c90 */
    if (*(int *)(*(long *)param_1[0xb0] + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
                    /* catch() { ... } // from try @ 03394c7c with catch @ 03394c90 */
                    /* try { // try from 03394c9c to 03494ca7 has its CatchHandler @ 03394cbc */
                    /* try { // try from 03394ca8 to 03494cb3 has its CatchHandler @ 03394a44 */
    uVar5 = FUN_03375048(unaff_x28,unaff_w25,unaff_x27,param_2,&stack0x00000048,0);
    if ((uVar5 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_03295500(0);
      FUN_033985d4();
    }
    else {
                    /* try { // try from 03394cb4 to 03494cbb has its CatchHandler @ 03394cbc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03394c9c with catch @ 03394cbc
                       catch(type#2 @ 00000000) { ... } // from try @ 03394cb4 with catch @ 03394cbc
                        */
      in_stack_00000020 = in_stack_00000048;
                    /* try { // try from 03394cc0 to 03494dbb has its CatchHandler @ 03394cc0
                       catch() { ... } // from try @ 03394cc0 with catch @ 03394cc0
                       catch() { ... } // from try @ 03394eb4 with catch @ 03394cc0
                       catch() { ... } // from try @ 03394ef4 with catch @ 03394cc0
                       catch() { ... } // from try @ 03394f08 with catch @ 03394cc0
                       catch() { ... } // from try @ 03394f64 with catch @ 03394cc0 */
      thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422f960,&stack0x00000020);
    }
LAB_03394ea0:
    uVar5 = FUN_0335ce1c();
    if ((uVar5 & 1) == 0) {
      thunk_FUN_01c273e8(Method_UnityEngine_UIElements_FocusEventBase<BlurEvent>_get_relatedTarget__
                        );
      uVar7 = FUN_0335cdc4();
      uVar8 = thunk_FUN_01c273e8(Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>__ctor__);
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar7,uVar8);
    }
    if (unaff_x26 == (long *)0x0) {
LAB_03394ef4:
      FUN_033966b4();
    }
    else {
      uVar5 = (**(code **)(*unaff_x26 + 0x1a8))();
      if ((uVar5 & 1) == 0) goto LAB_03394ef4;
      FUN_033962a0();
    }
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar9 = *unaff_x23;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)System_Security_Cryptography_CryptoConfig_TypeInfo)
        {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_03394f78;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_01c72498();
LAB_03394f78:
    (*(code *)*puVar6)();
LAB_03394f8c:
    do {
      uVar5 = (**(code **)(*unaff_x19 + 0x1d8))();
      if ((uVar5 & 1) == 0) {
        FUN_0339d160();
LAB_03395250:
        FUN_0339cf34();
        return in_stack_00000010;
      }
      iVar2 = (**(code **)(*unaff_x19 + 0x188))();
      if (iVar2 != 4) {
        if (iVar2 != 5) {
          if (iVar2 != 0xd) {
            FUN_019b2708();
            uVar3 = (**(code **)(*unaff_x19 + 0x188))();
            in_stack_00000020 = thunk_FUN_01c273e8(PTR_DAT_042308a0);
            in_stack_00000028 = 0xffffffffffffffff;
            in_stack_00000030 = uVar3;
            uVar7 = FUN_03307544(&stack0x00000020,0);
            uVar8 = thunk_FUN_01c273e8(
                                      Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>_get_IsFocusDelegated__
                                      );
            FUN_03146988(uVar8,uVar7,0);
            uVar7 = FUN_0335cdc4();
            uVar8 = thunk_FUN_01c273e8(
                                      Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>__ctor__
                                      );
                    /* WARNING: Subroutine does not return */
            FUN_01c5d37c(uVar7,uVar8);
          }
          goto LAB_03395250;
        }
        goto LAB_03394f8c;
      }
      plVar4 = (long *)(**(code **)(*unaff_x19 + 0x198))();
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      uVar5 = FUN_0339738c();
    } while ((uVar5 & 1) != 0);
    if (unaff_w24 == 0x1c) {
      uVar7 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      lVar9 = unaff_x19[0xc];
      uVar8 = FUN_033594d8();
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<StyleValueManaged>_MoveNext__
                  + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar5 = FUN_03375738(uVar7,lVar9,uVar8,&stack0x00000038,0);
      if ((uVar5 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_03295500(0);
        FUN_033985d4();
      }
      else {
        in_stack_00000028 = in_stack_00000040;
        in_stack_00000020 = in_stack_00000038;
        thunk_FUN_01c49334(*(undefined8 *)UnityEngine_ISubsystemDescriptor_TypeInfo,&stack0x00000020
                          );
      }
      goto LAB_03394ea0;
    }
    if (unaff_w24 != 0x1a) {
      lVar9 = *(long *)(unaff_x20 + 0xd8);
      if ((lVar9 == 0) || (*(char *)(lVar9 + 0x12) == '\0')) {
        if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_03295500(0);
        FUN_033985d4();
      }
      else {
        if (*(long *)(unaff_x21 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        plVar10 = *(long **)(*(long *)(unaff_x21 + 0x20) + 0x40);
        if (plVar10 == (long *)0x0) {
LAB_03394da0:
          lVar12 = 0;
        }
        else {
          bVar1 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_List_Enumerator<TranslationJob>_MoveNext__
                           + 0x130);
          if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Method_System_Collections_Generic_List_Enumerator<TranslationJob>_MoveNext__)
             ) goto LAB_03394da0;
          lVar12 = plVar10[6];
        }
        uVar8 = *(undefined8 *)(lVar9 + 0x18);
        uVar7 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_TerrainMaterial>_Dispose__
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_03378ae0(uVar8,lVar12,uVar7,0,0);
      }
      goto LAB_03394ea0;
    }
    unaff_x28 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    unaff_w25 = (undefined4)unaff_x19[9];
    unaff_x27 = unaff_x19[0xc];
    param_2 = FUN_033594d8();
    param_1 = &Method_System_Collections_Generic_List_Enumerator<OVRSpatialAnchor>_get_Current__;
  } while( true );
}


