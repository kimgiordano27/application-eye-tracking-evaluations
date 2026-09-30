/*
FUNCTION_NAME: FUN_01ed0eac
ENTRY_POINT: 01ed0eac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_19;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


long FUN_01ed0eac(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long local_68;
  
  if ((DAT_0377ffd2 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_LinkedList<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>>_Remove__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(PTR_DAT_033f1778);
    DAT_0377ffd2 = 1;
  }
  puVar3 = PTR_DAT_033f1778;
  local_68 = 0;
  if (*(long *)(param_1 + 0x40) == 0) goto LAB_01ed12c8;
  if (*(int *)(*(long *)(param_1 + 0x40) + 0x1c) < 2) {
    uVar14 = thunk_FUN_00d48444(StringLiteral_3033);
    uVar14 = FUN_00da4fb8(uVar14,1);
    puVar3 = PTR_DAT_033f1778;
    thunk_FUN_00d48444(PTR_DAT_033f1778);
    FUN_00acb0a4();
    lVar7 = thunk_FUN_00d48444(puVar3);
    uVar15 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x30);
    FUN_00ac2be8(uVar15);
    uVar15 = FUN_00bd94ec(uVar15,9);
    FUN_00ac2be8(uVar14);
    FUN_00acb0b4(uVar14,uVar15);
    FUN_00adb25c(uVar14,0,uVar15);
    uVar15 = thunk_FUN_00d48444(StringLiteral_4272);
    uVar14 = FUN_01f71d98(uVar15,uVar14,0);
LAB_01ed135c:
    thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
    uVar15 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    FUN_017713a8(uVar15,uVar14,0);
    uVar14 = thunk_FUN_00d48444(System_Security_Cryptography_AsymmetricAlgorithm_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar15,uVar14);
  }
  lVar7 = *(long *)PTR_DAT_033f1778;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *(long *)puVar3;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x30);
  if (lVar7 == 0) goto LAB_01ed12c8;
  if (*(uint *)(lVar7 + 0x18) < 10) {
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  FUN_01ecd57c(param_1,9,*(undefined8 *)(lVar7 + 0x68));
  lVar7 = *(long *)(param_1 + 0x48);
  if (lVar7 == 0) goto LAB_01ed12c8;
  lVar13 = *(long *)(lVar7 + 0x20);
  local_68 = 0;
  if (lVar13 == 0) {
    uVar15 = 0;
    uVar14 = 0;
  }
  else {
    uVar14 = **(undefined8 **)
               (*(long *)
                 System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo + 0xb8
               );
    if ((*(char *)(lVar7 + 0x13) != '\0') && (*(char *)(lVar13 + 0x74) != '\0')) {
      FUN_01ed009c(param_1,lVar13);
      lVar7 = *(long *)(param_1 + 0x48);
      if (lVar7 == 0) goto LAB_01ed12c8;
    }
    if ((*(char *)(lVar7 + 0x10) == '\0') && (*(char *)(lVar7 + 0x12) != '\0')) {
      plVar9 = *(long **)(lVar13 + 0x80);
      if (plVar9 == (long *)0x0) goto LAB_01ed12c8;
      iVar2 = (int)plVar9[2];
      if (iVar2 == 3) {
        if ((param_3 == 0) && (*(long *)(lVar13 + 0x40) != 0)) {
          plVar9 = *(long **)(param_1 + 0xa8);
          if (plVar9 == (long *)0x0) goto LAB_01ed12c8;
          uVar14 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
          param_3 = FUN_01ed2968(param_1,uVar14);
        }
LAB_01ed117c:
        plVar9 = *(long **)(lVar13 + 0x80);
        if (plVar9 == (long *)0x0) goto LAB_01ed12c8;
      }
      else {
        if (iVar2 == 2) {
          if (param_3 != 0) {
            uVar14 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_18__);
            uVar14 = FUN_01f75600(uVar14,0);
            goto LAB_01ed135c;
          }
          goto LAB_01ed117c;
        }
        if (iVar2 == 0) {
          if (param_3 == 0) {
            plVar9 = *(long **)(param_1 + 0xa8);
            if (plVar9 == (long *)0x0) goto LAB_01ed12c8;
            uVar14 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
            param_3 = FUN_01ed23a0(param_1,uVar14,&local_68);
          }
          else {
            param_3 = FUN_01ed2634(param_1,param_3,&local_68);
          }
          goto LAB_01ed117c;
        }
      }
      uVar8 = (**(code **)(*plVar9 + 0x1a8))
                        (plVar9,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(*plVar9 + 0x1b0));
      puVar4 = 
      Method_System_Collections_Generic_LinkedList<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>>_Remove__
      ;
      if ((uVar8 & 1) == 0) {
        plVar9 = *(long **)(param_1 + 200);
        if (plVar9 == (long *)0x0) goto LAB_01ed12c8;
        lVar7 = *plVar9;
        uVar16 = *(undefined8 *)(param_1 + 0x48);
        uVar12 = *(undefined8 *)(param_1 + 0xb0);
        uVar15 = *(undefined8 *)(param_1 + 0xe8);
        uVar1 = *(undefined8 *)(param_1 + 0xf0);
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar8 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) ==
                *(long *)
                 Method_System_Collections_Generic_LinkedList<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>>_Remove__
               ) {
              puVar10 = (undefined8 *)(lVar7 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_01ed1208;
            }
            uVar8 = uVar8 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar8 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_00d59724(plVar9,*(long *)
                                       Method_System_Collections_Generic_LinkedList<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>>_Remove__
                               ,1);
LAB_01ed1208:
        uVar5 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        plVar9 = *(long **)(param_1 + 200);
        if (plVar9 == (long *)0x0) goto LAB_01ed12c8;
        lVar7 = *plVar9;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar8 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
              puVar10 = (undefined8 *)(lVar7 + (long)(*piVar11 + 2) * 0x10 + 0x138);
              goto LAB_01ed1270;
            }
            uVar8 = uVar8 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar8 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar4,2);
LAB_01ed1270:
        uVar6 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        lVar7 = *(long *)puVar3;
        uVar17 = *(undefined8 *)(param_1 + 0x10);
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar7);
        }
        FUN_01ed2a44(uVar16,uVar12,uVar1,uVar15,uVar5,uVar6,uVar17);
        if (*(long *)(param_1 + 0x48) == 0) goto LAB_01ed12c8;
        *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x1c) = 2;
      }
    }
    if (((*(byte *)(param_1 + 0x18) >> 3 & 1) != 0) && (*(int *)(param_1 + 0x1c) != -1)) {
      plVar9 = (long *)(lVar13 + 0x28);
      if (local_68 != 0) {
        plVar9 = &local_68;
      }
      if (*plVar9 == 0) goto LAB_01ed12c8;
      FUN_01ed2eec(param_1,param_3,uVar14,*(undefined8 *)(*plVar9 + 0x68));
    }
    uVar15 = *(undefined8 *)(lVar13 + 0x28);
    uVar14 = FUN_01ecea18(param_1);
  }
  if (param_2 != 0) {
    FUN_01ebf448(param_2,uVar15,0);
    FUN_01ebf46c(param_2,uVar14,0);
    *(long *)(param_2 + 0x30) = local_68;
    lVar7 = *(long *)(param_1 + 0x48);
    if (lVar7 == 0) goto LAB_01ed12c8;
    *(undefined1 *)(param_2 + 0x11) = *(undefined1 *)(lVar7 + 0x10);
    *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(lVar7 + 0x11);
    if (*(int *)(lVar7 + 0x1c) == 0) {
      uVar8 = FUN_01ed22f4(param_1);
      lVar7 = *(long *)(param_1 + 0x48);
      if ((uVar8 & 1) == 0) {
        if (lVar7 == 0) goto LAB_01ed12c8;
      }
      else {
        if (lVar7 == 0) {
LAB_01ed12c8:
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        *(undefined4 *)(lVar7 + 0x1c) = 1;
      }
    }
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(lVar7 + 0x1c);
  }
  FUN_01ed15a8(param_1);
  return param_3;
}


