/*
FUNCTION_NAME: FUN_01ed5588
ENTRY_POINT: 01ed5588
PROGRAM: Lovesick-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_01ed5588(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  long *plVar18;
  uint uVar19;
  long lVar20;
  
  if ((DAT_0377ffec & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_LinkedList<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>>_Remove__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_LowLevel_ActionEvent_set_controlIndex__);
    thunk_FUN_00d48444(PTR_DAT_033ef1e8);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_113_0_TypeInfo);
    DAT_0377ffec = 1;
  }
  puVar5 = Method_UnityEngine_InputSystem_LowLevel_ActionEvent_set_controlIndex__;
  lVar13 = *(long *)(param_1 + 0x48);
  if ((lVar13 != 0) && (lVar9 = *(long *)(param_1 + 0x40), lVar9 != 0)) {
    lVar20 = *(long *)(lVar13 + 0x20);
    uVar1 = *(undefined8 *)(lVar13 + 0x30);
    uVar2 = *(undefined8 *)(lVar13 + 0x38);
    iVar15 = *(int *)(param_1 + 0x1c);
    puVar12 = (undefined8 *)OVRPlugin_OVRP_1_113_0_TypeInfo;
    do {
      if (*(int *)(lVar9 + 0x1c) <= iVar15) {
        return;
      }
      plVar10 = (long *)FUN_01f5cf88(lVar9,iVar15,0);
      if (plVar10 == (long *)0x0) break;
      if (*plVar10 != *(long *)PTR_DAT_033ef1e8) {
LAB_01ed5934:
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar10);
      }
      if (plVar10[8] != 0) {
        if ((*(long *)(param_1 + 0x40) == 0) ||
           (plVar10 = (long *)FUN_01f5cf88(*(long *)(param_1 + 0x40),iVar15,0),
           plVar10 == (long *)0x0)) break;
        if (*plVar10 != *(long *)PTR_DAT_033ef1e8) goto LAB_01ed5934;
        lVar13 = plVar10[8];
        if (lVar13 == 0) break;
        uVar3 = *(uint *)(lVar13 + 0x18);
        if (0 < (int)uVar3) {
          uVar19 = 0;
          do {
            if (uVar3 <= uVar19) {
LAB_01ed592c:
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            plVar18 = (long *)(lVar13 + (long)(int)uVar19 * 8 + 0x20);
            if ((*plVar18 == 0) || (lVar9 = *(long *)(*plVar18 + 0x18), lVar9 == 0))
            goto LAB_01ed5908;
            uVar11 = FUN_01fab134(lVar9,uVar1,uVar2,0);
            if ((uVar11 & 1) != 0) {
              if (*(uint *)(lVar13 + 0x18) <= uVar19) goto LAB_01ed592c;
              if ((*plVar18 == 0) || (plVar10 = *(long **)(param_1 + 200), plVar10 == (long *)0x0))
              goto LAB_01ed5908;
              lVar9 = *plVar10;
              lVar17 = *(long *)(*plVar18 + 0x18);
              uVar11 = (ulong)*(ushort *)(lVar9 + 0x12a);
              if (uVar11 != 0) {
                piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) ==
                      *(long *)
                       Method_System_Collections_Generic_LinkedList<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>>_Remove__
                     ) {
                    puVar12 = (undefined8 *)(lVar9 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                    goto LAB_01ed5748;
                  }
                  uVar11 = uVar11 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar11 != 0);
              }
              puVar12 = (undefined8 *)
                        FUN_00d59724(plVar10,*(long *)
                                              Method_System_Collections_Generic_LinkedList<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>>_Remove__
                                     ,1);
LAB_01ed5748:
              uVar6 = (*(code *)*puVar12)(plVar10,puVar12[1]);
              plVar10 = *(long **)(param_1 + 200);
              if (plVar10 == (long *)0x0) goto LAB_01ed5908;
              lVar9 = *plVar10;
              uVar11 = (ulong)*(ushort *)(lVar9 + 0x12a);
              if (uVar11 != 0) {
                piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) ==
                      *(long *)
                       Method_System_Collections_Generic_LinkedList<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>>_Remove__
                     ) {
                    puVar12 = (undefined8 *)(lVar9 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                    goto LAB_01ed57b8;
                  }
                  uVar11 = uVar11 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar11 != 0);
              }
              puVar12 = (undefined8 *)
                        FUN_00d59724(plVar10,*(long *)
                                              Method_System_Collections_Generic_LinkedList<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>>_Remove__
                                     ,2);
LAB_01ed57b8:
              uVar7 = (*(code *)*puVar12)(plVar10,puVar12[1]);
              if (lVar17 == 0) goto LAB_01ed5908;
              FUN_01fafa50(lVar17,uVar6,uVar7,0);
              puVar12 = (undefined8 *)OVRPlugin_OVRP_1_113_0_TypeInfo;
            }
            if (*(uint *)(lVar13 + 0x18) <= uVar19) goto LAB_01ed592c;
            iVar16 = 0;
            while( true ) {
              if ((*plVar18 == 0) || (plVar10 = *(long **)(*plVar18 + 0x20), plVar10 == (long *)0x0)
                 ) goto LAB_01ed5908;
              iVar8 = (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0));
              if (iVar8 <= iVar16) break;
              if (*(uint *)(lVar13 + 0x18) <= uVar19) goto LAB_01ed592c;
              if (((*plVar18 == 0) ||
                  (plVar10 = *(long **)(*plVar18 + 0x20), plVar10 == (long *)0x0)) ||
                 (plVar10 = (long *)(**(code **)(*plVar10 + 0x2e8))
                                              (plVar10,iVar16,*(undefined8 *)(*plVar10 + 0x2f0)),
                 plVar10 == (long *)0x0)) goto LAB_01ed5908;
              bVar4 = *(byte *)(*(long *)puVar5 + 300);
              if ((*(byte *)(*plVar10 + 300) < bVar4) ||
                 (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)puVar5))
              goto LAB_01ed5934;
              uVar11 = FUN_01fab134(plVar10,uVar1,uVar2,0);
              if ((lVar20 != 0) && ((uVar11 & 1) != 0)) {
                if (*(long *)(lVar20 + 0x30) != 0) {
                  if (*(long *)(lVar20 + 0x80) == 0) goto LAB_01ed5908;
                  if (*(int *)(*(long *)(lVar20 + 0x80) + 0x10) != 3) {
                    *(undefined1 *)((long)plVar10 + 0x2c) = 1;
                    goto LAB_01ed58d4;
                  }
                }
                FUN_01ecf528(param_1,*puVar12,uVar1);
              }
LAB_01ed58d4:
              iVar16 = iVar16 + 1;
              if (*(uint *)(lVar13 + 0x18) <= uVar19) goto LAB_01ed592c;
            }
            uVar3 = *(uint *)(lVar13 + 0x18);
            uVar19 = uVar19 + 1;
          } while ((int)uVar19 < (int)uVar3);
        }
      }
      lVar9 = *(long *)(param_1 + 0x40);
      iVar15 = iVar15 + 1;
    } while (lVar9 != 0);
  }
LAB_01ed5908:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


