/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetUserEyeHeight
ENTRY_POINT: 03397af0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_1_0__ovrp_GetUserEyeHeight(void)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long in_x5;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x20;
  undefined8 uVar12;
  long unaff_x23;
  undefined *puVar8;
  
  if (in_x5 == 0) {
    plVar2 = (long *)FUN_0338fba4();
    if (plVar2 == (long *)0x0) {
LAB_03397e00:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar9 = *plVar2;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)
             Method_System_Collections_Generic_Dictionary_Enumerator<Type,_BinaryStorageBuffer_ISerializationAdapter>_MoveNext__
           ) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03397c18;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01c72498(plVar2,*(long *)
                                  Method_System_Collections_Generic_Dictionary_Enumerator<Type,_BinaryStorageBuffer_ISerializationAdapter>_MoveNext__
                          ,0);
LAB_03397c18:
    iVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if (iVar1 < 1) {
      plVar2 = (long *)FUN_0338fc1c();
      if (plVar2 == (long *)0x0) goto LAB_03397e00;
      lVar9 = *plVar2;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_System_Collections_Generic_HashSet<AsyncOperationHandle>_get_Count__)
          {
            puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_03397c90;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01c72498(plVar2,*(long *)
                                    Method_System_Collections_Generic_HashSet<AsyncOperationHandle>_get_Count__
                            ,0);
LAB_03397c90:
      iVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if (iVar1 < 1) {
        uVar10 = FUN_03390838();
        if ((uVar10 & 1) != 0) {
          FUN_03394994();
          lVar9 = *(long *)(unaff_x23 + 0x110);
          if (lVar9 == 0) {
            lVar9 = FUN_03390754();
          }
          lVar4 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,1);
          if (lVar4 != 0) {
            if ((unaff_x20 != 0) && (lVar5 = thunk_FUN_01c495e4(), lVar5 == 0)) {
              uVar6 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
              FUN_01c5d37c(uVar6,0);
            }
            if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4ac();
            }
            *(long *)(lVar4 + 0x20) = unaff_x20;
            if (lVar9 != 0) {
              uVar6 = (**(code **)(lVar9 + 0x18))
                                (*(undefined8 *)(lVar9 + 0x40),lVar4,*(undefined8 *)(lVar9 + 0x28));
              return uVar6;
            }
          }
          goto LAB_03397e00;
        }
        thunk_FUN_01c273e8(PTR_DAT_042305b0);
        FUN_019b5f60();
        uVar6 = FUN_03295500(0);
        FUN_019b2708();
        uVar12 = *(undefined8 *)(unaff_x23 + 0x60);
        puVar8 = Method_System_Collections_Generic_HashSet<ColliderZone>__ctor__;
      }
      else {
        thunk_FUN_01c273e8(PTR_DAT_042305b0);
        FUN_019b5f60();
        uVar6 = FUN_03295500(0);
        FUN_019b2708();
        uVar12 = *(undefined8 *)(unaff_x23 + 0x60);
        puVar8 = Method_System_Collections_Generic_HashSet<byte>_Remove__;
      }
    }
    else {
      thunk_FUN_01c273e8(PTR_DAT_042305b0);
      FUN_019b5f60();
      uVar6 = FUN_03295500(0);
      FUN_019b2708();
      uVar12 = *(undefined8 *)(unaff_x23 + 0x60);
      puVar8 = Method_System_Collections_Generic_HashSet<byte>_Contains__;
    }
  }
  else {
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar6 = FUN_03295500(0);
    FUN_019b2708();
    uVar12 = *(undefined8 *)(unaff_x23 + 0x60);
    puVar8 = Method_System_Collections_Generic_HashSet<byte>_Clear__;
  }
  uVar7 = thunk_FUN_01c273e8(puVar8);
  FUN_0336f2b8(uVar7,uVar6,uVar12,0);
  uVar6 = FUN_0335cdc4();
  uVar12 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<ColliderZone>_Add__);
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar6,uVar12);
}


