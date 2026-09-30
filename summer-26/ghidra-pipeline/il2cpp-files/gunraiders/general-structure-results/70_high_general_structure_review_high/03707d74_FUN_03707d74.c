/*
FUNCTION_NAME: FUN_03707d74
ENTRY_POINT: 03707d74
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4
*/


void FUN_03707d74(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 local_58;
  
  if ((DAT_045388b5 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_042305b0);
    FUN_01c5d288(Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fc38);
    FUN_01c5d288(Method_System_Threading_ExecutionContext_CreateCopy__);
    FUN_01c5d288(Method_System_Linq_Enumerable_ToArray<string>__);
    FUN_01c5d288(Method_System_Linq_Enumerable_ToArray<Vertex>__);
    FUN_01c5d288(Method_System_Security_Cryptography_DSA_FromXmlString__);
    FUN_01c5d288(Method_System_DBNull_System_IConvertible_ToSingle__);
    FUN_01c5d288(System_Func<Scale,_Scale,_bool>_TypeInfo);
    FUN_01c5d288(PTR_DAT_042341c8);
    FUN_01c5d288(Method_System_Security_Cryptography_DSA_HashData__);
    FUN_01c5d288(Method_UnityEngine_EventSystems_ExecuteEvents_Execute__);
    FUN_01c5d288(Method_System_Linq_Enumerable_ToList<float>__);
    DAT_045388b5 = 1;
  }
  local_58 = 0;
  if (param_2 != 0) {
    iVar3 = FUN_036aec94(param_2,0);
    if ((iVar3 == 2) || (iVar3 == 4)) {
      return;
    }
    if (*(char *)(param_1 + 0x30) == '\0') {
      plVar6 = *(long **)(param_1 + 0x28);
      if (plVar6 == (long *)0x0) goto LAB_0370831c;
      (**(code **)(*plVar6 + 0x1c8))
                (plVar6,*(undefined8 *)Method_UnityEngine_EventSystems_ExecuteEvents_Execute__,
                 *(undefined8 *)Method_System_Security_Cryptography_DSA_HashData__,
                 *(undefined8 *)Method_System_DBNull_System_IConvertible_ToSingle__,
                 *(undefined8 *)(*plVar6 + 0x1d0));
      *(undefined1 *)(param_1 + 0x30) = 1;
    }
    lVar15 = *(long *)(param_2 + 0x10);
    if ((lVar15 != 0) && (plVar6 = *(long **)(lVar15 + 0x40), plVar6 != (long *)0x0)) {
      iVar4 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
      puVar1 = PTR_DAT_042305b0;
      local_58 = *(undefined8 *)(param_2 + 0x30);
      uVar13 = *(undefined8 *)(lVar15 + 0x90);
      if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
      }
      uVar7 = FUN_03295500(0);
      uVar7 = FUN_032d073c(&local_58,uVar7,0);
      uVar13 = FUN_03146988(uVar13,uVar7,0);
      lVar14 = 0;
      if (iVar3 == 8) {
        if ((*(long *)(param_2 + 0x10) == 0) ||
           (lVar14 = *(long *)(*(long *)(param_2 + 0x10) + 0x188), lVar14 == 0)) goto LAB_0370831c;
        if ((*(long *)(lVar14 + 0x18) == 0) || (lVar14 = FUN_036b04c8(param_2,0x100,0), lVar14 == 0)
           ) {
          lVar14 = 0;
        }
        else {
          if (*(long *)(lVar14 + 0x10) == 0) goto LAB_0370831c;
          local_58 = *(undefined8 *)(lVar14 + 0x30);
          uVar7 = *(undefined8 *)(*(long *)(lVar14 + 0x10) + 0x90);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar8 = FUN_03295500(0);
          uVar8 = FUN_032d073c(&local_58,uVar8,0);
          lVar14 = FUN_03146988(uVar7,uVar8,0);
        }
      }
      lVar9 = FUN_03669568(lVar15,0);
      if (lVar9 != 0) {
        if (*(int *)(lVar9 + 0x10) == 0) {
          puVar12 = *(undefined8 **)(*(long *)PTR_DAT_0422fc38 + 0xb8);
        }
        else {
          puVar12 = (undefined8 *)(lVar15 + 0xa0);
        }
        uVar7 = *puVar12;
        if (*(long *)(lVar15 + 0xf8) == 0) {
          if (*(int *)(*(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo + 0xe0)
              == 0) {
            thunk_FUN_01c1d1e8();
          }
        }
        else {
          FUN_036af620(param_2,*(long *)(lVar15 + 0xf8),0x100,0);
        }
        if (*(long *)(param_2 + 0x10) != 0) {
          plVar6 = *(long **)(param_1 + 0x28);
          uVar8 = FUN_0367145c(*(long *)(param_2 + 0x10),0);
          if ((*(long *)(param_2 + 0x10) != 0) &&
             (uVar10 = FUN_03669568(*(long *)(param_2 + 0x10),0), plVar6 != (long *)0x0)) {
            (**(code **)(*plVar6 + 0x1c8))
                      (plVar6,uVar7,uVar8,uVar10,*(undefined8 *)(*plVar6 + 0x1d0));
            puVar2 = Method_UnityEngine_EventSystems_ExecuteEvents_Execute__;
            puVar1 = Method_System_DBNull_System_IConvertible_ToSingle__;
            if (*(long *)(param_1 + 0x28) != 0) {
              FUN_03865e10(*(long *)(param_1 + 0x28),
                           *(undefined8 *)Method_UnityEngine_EventSystems_ExecuteEvents_Execute__,
                           *(undefined8 *)System_Func<Scale,_Scale,_bool>_TypeInfo,
                           *(undefined8 *)Method_System_DBNull_System_IConvertible_ToSingle__,uVar13
                           ,0);
              if ((iVar3 == 8) && (uVar11 = FUN_03708320(param_2), (uVar11 & 1) != 0)) {
                if (*(long *)(param_1 + 0x28) == 0) goto LAB_0370831c;
                FUN_03865e10(*(long *)(param_1 + 0x28),*(undefined8 *)puVar2,
                             *(undefined8 *)Method_System_Linq_Enumerable_ToArray<string>__,
                             *(undefined8 *)puVar1,*(undefined8 *)PTR_DAT_042341c8,0);
              }
              if (lVar14 != 0) {
                if (*(long *)(param_1 + 0x28) == 0) goto LAB_0370831c;
                FUN_03865e10(*(long *)(param_1 + 0x28),*(undefined8 *)puVar2,
                             *(undefined8 *)Method_System_Threading_ExecutionContext_CreateCopy__,
                             *(undefined8 *)puVar1,lVar14,0);
              }
              plVar6 = *(long **)(param_1 + 0x38);
              if (plVar6 != (long *)0x0) {
                lVar15 = *(long *)(param_1 + 0x28);
                plVar6 = (long *)(**(code **)(*plVar6 + 0x308))
                                           (plVar6,param_2,*(undefined8 *)(*plVar6 + 0x310));
                if ((plVar6 != (long *)0x0) &&
                   (uVar13 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170))
                   , lVar15 != 0)) {
                  FUN_03865e10(lVar15,*(undefined8 *)Method_System_Linq_Enumerable_ToList<float>__,
                               *(undefined8 *)Method_System_Linq_Enumerable_ToArray<Vertex>__,
                               *(undefined8 *)
                                Method_System_Security_Cryptography_DSA_FromXmlString__,uVar13,0);
                  if (0 < iVar4) {
                    iVar3 = 0;
                    do {
                      if (((*(long *)(param_2 + 0x10) == 0) ||
                          (lVar15 = *(long *)(*(long *)(param_2 + 0x10) + 0x40), lVar15 == 0)) ||
                         (plVar6 = (long *)FUN_036a4938(lVar15,iVar3,0), plVar6 == (long *)0x0))
                      goto LAB_0370831c;
                      iVar5 = (**(code **)(*plVar6 + 0x238))
                                        (plVar6,*(undefined8 *)(*plVar6 + 0x240));
                      if (iVar5 == 2) {
LAB_037081f8:
                        if ((*(long *)(param_2 + 0x10) == 0) ||
                           (lVar15 = *(long *)(*(long *)(param_2 + 0x10) + 0x40), lVar15 == 0))
                        goto LAB_0370831c;
                        uVar13 = FUN_036a4938(lVar15,iVar3,0);
                        FUN_037083e8(param_1,param_2,uVar13,0x100);
                      }
                      else {
                        if (((*(long *)(param_2 + 0x10) == 0) ||
                            (lVar15 = *(long *)(*(long *)(param_2 + 0x10) + 0x40), lVar15 == 0)) ||
                           (plVar6 = (long *)FUN_036a4938(lVar15,iVar3,0), plVar6 == (long *)0x0))
                        goto LAB_0370831c;
                        iVar5 = (**(code **)(*plVar6 + 0x238))
                                          (plVar6,*(undefined8 *)(*plVar6 + 0x240));
                        if (iVar5 == 4) goto LAB_037081f8;
                      }
                      iVar3 = iVar3 + 1;
                    } while (iVar4 != iVar3);
                    if (0 < iVar4) {
                      iVar3 = 0;
                      do {
                        if (((*(long *)(param_2 + 0x10) == 0) ||
                            (lVar15 = *(long *)(*(long *)(param_2 + 0x10) + 0x40), lVar15 == 0)) ||
                           (plVar6 = (long *)FUN_036a4938(lVar15,iVar3,0), plVar6 == (long *)0x0))
                        goto LAB_0370831c;
                        iVar5 = (**(code **)(*plVar6 + 0x238))
                                          (plVar6,*(undefined8 *)(*plVar6 + 0x240));
                        if (iVar5 == 1) {
LAB_037082b0:
                          if ((*(long *)(param_2 + 0x10) == 0) ||
                             (lVar15 = *(long *)(*(long *)(param_2 + 0x10) + 0x40), lVar15 == 0))
                          goto LAB_0370831c;
                          uVar13 = FUN_036a4938(lVar15,iVar3,0);
                          FUN_037083e8(param_1,param_2,uVar13,0x100);
                        }
                        else {
                          if (((*(long *)(param_2 + 0x10) == 0) ||
                              (lVar15 = *(long *)(*(long *)(param_2 + 0x10) + 0x40), lVar15 == 0))
                             || (plVar6 = (long *)FUN_036a4938(lVar15,iVar3,0),
                                plVar6 == (long *)0x0)) goto LAB_0370831c;
                          iVar5 = (**(code **)(*plVar6 + 0x238))
                                            (plVar6,*(undefined8 *)(*plVar6 + 0x240));
                          if (iVar5 == 3) goto LAB_037082b0;
                        }
                        iVar3 = iVar3 + 1;
                      } while (iVar4 != iVar3);
                    }
                  }
                  plVar6 = *(long **)(param_1 + 0x28);
                  if (plVar6 != (long *)0x0) {
                    (**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0370831c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


