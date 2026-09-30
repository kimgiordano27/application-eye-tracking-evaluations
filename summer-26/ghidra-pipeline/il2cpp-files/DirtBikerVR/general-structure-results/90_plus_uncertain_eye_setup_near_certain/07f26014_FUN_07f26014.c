/*
FUNCTION_NAME: FUN_07f26014
ENTRY_POINT: 07f26014
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x07f263e4) */
/* WARNING: Removing unreachable block (ram,0x07f265dc) */

void FUN_07f26014(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  
  if ((DAT_0899b07d & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08493c18);
    FUN_03a8a718(OVRPlugin_TextureRectMatrixf_TypeInfo);
    FUN_03a8a718(PTR_DAT_08488550);
    FUN_03a8a718(Method_System_Collections_Generic_Dictionary<int,_DynamicResolutionHandler>_Add__);
    FUN_03a8a718(PTR_DAT_08496230);
    FUN_03a8a718(PTR_DAT_08496238);
    FUN_03a8a718(PTR_DAT_08488568);
    FUN_03a8a718(PTR_DAT_08492790);
    FUN_03a8a718(
                UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_BorderLeftColorProperty_TypeInfo
                );
    DAT_0899b07d = 1;
  }
  if ((param_2 & 1) != 0) {
    plVar11 = *(long **)(param_1 + 0x78);
    if (plVar11 == (long *)0x0) goto LAB_07f265d8;
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)
             Method_System_Collections_Generic_Dictionary<int,_DynamicResolutionHandler>_Add__) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 4) * 0x10 + 0x138);
          goto LAB_07f26118;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_03ac43c4(plVar11,*(long *)
                                   Method_System_Collections_Generic_Dictionary<int,_DynamicResolutionHandler>_Add__
                          ,4);
LAB_07f26118:
    (*(code *)*puVar5)(plVar11,puVar5[1]);
  }
  lVar8 = FUN_07f22a50(param_1);
  if (((lVar8 != 0) && (plVar11 = *(long **)(lVar8 + 0x2a0), plVar11 != (long *)0x0)) &&
     (plVar11 = (long *)(**(code **)(*plVar11 + 0x398))(plVar11,*(undefined8 *)(*plVar11 + 0x3a0)),
     plVar11 != (long *)0x0)) {
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)OVRPlugin_TextureRectMatrixf_TypeInfo) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_07f261a8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03ac43c4(plVar11,*(long *)OVRPlugin_TextureRectMatrixf_TypeInfo,1);
LAB_07f261a8:
    (*(code *)*puVar5)(plVar11,puVar5[1]);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    lVar8 = FUN_07f22a50(param_1);
    if ((lVar8 != 0) && (plVar11 = (long *)FUN_07ebfa24(lVar8,0), plVar11 != (long *)0x0)) {
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08496230) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_07f2622c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_03ac43c4(plVar11,*(long *)PTR_DAT_08496230,0);
LAB_07f2622c:
      puVar4 = PTR_DAT_08496238;
      puVar3 = PTR_DAT_08493c18;
      puVar2 = PTR_DAT_08488568;
      puVar1 = PTR_DAT_08488550;
      plVar11 = (long *)(*(code *)*puVar5)(plVar11,puVar5[1]);
      do {
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar8 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_07f262b8;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_03ac43c4(plVar11,*(long *)puVar2,0);
LAB_07f262b8:
        uVar9 = (*(code *)*puVar5)(plVar11,puVar5[1]);
        if ((uVar9 & 1) == 0) {
          if (plVar11 == (long *)0x0) goto LAB_07f263d8;
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 == 0) goto LAB_07f263b0;
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_07f26398;
        }
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar8 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_07f2631c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_03ac43c4(plVar11,*(long *)puVar4,0);
LAB_07f2631c:
        plVar6 = (long *)(*(code *)*puVar5)(plVar11,puVar5[1]);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar8 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        FUN_07e0a908(lVar8,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x770),0);
      } while( true );
    }
  }
LAB_07f265d8:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_07f26398:
    if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_07f263cc;
    }
  }
LAB_07f263b0:
  puVar5 = (undefined8 *)FUN_03ac43c4(plVar11,*(long *)puVar1,0);
LAB_07f263cc:
  (*(code *)*puVar5)(plVar11,puVar5[1]);
LAB_07f263d8:
  if (*(long *)(param_1 + 0x50) != 0) {
    plVar11 = (long *)FUN_07e05b1c(*(long *)(param_1 + 0x50),0);
    uVar7 = FUN_0586feac(1,*(undefined8 *)
                            UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_BorderLeftColorProperty_TypeInfo
                        );
    if (plVar11 == (long *)0x0) goto LAB_07f265d8;
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08492790) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0xa3) * 0x10 + 0x138);
          goto LAB_07f26470;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03ac43c4(plVar11,*(long *)PTR_DAT_08492790,0xa3);
LAB_07f26470:
    (*(code *)*puVar5)(plVar11,uVar7,puVar5[1]);
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    plVar11 = (long *)FUN_07e05b1c(*(long *)(param_1 + 0x58),0);
    uVar7 = FUN_0586feac(1,*(undefined8 *)
                            UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_BorderLeftColorProperty_TypeInfo
                        );
    if (plVar11 == (long *)0x0) goto LAB_07f265d8;
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08492790) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0xa3) * 0x10 + 0x138);
          goto LAB_07f26508;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03ac43c4(plVar11,*(long *)PTR_DAT_08492790,0xa3);
LAB_07f26508:
    (*(code *)*puVar5)(plVar11,uVar7,puVar5[1]);
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    plVar11 = (long *)FUN_07e05b1c(*(long *)(param_1 + 0x60),0);
    uVar7 = FUN_0586feac(1,*(undefined8 *)
                            UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_BorderLeftColorProperty_TypeInfo
                        );
    if (plVar11 == (long *)0x0) goto LAB_07f265d8;
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08492790) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0xa3) * 0x10 + 0x138);
          goto LAB_07f265a0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03ac43c4(plVar11,*(long *)PTR_DAT_08492790,0xa3);
LAB_07f265a0:
    (*(code *)*puVar5)(plVar11,uVar7,puVar5[1]);
  }
  return;
}


