/*
FUNCTION_NAME: FUN_0576f2cc
ENTRY_POINT: 0576f2cc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 FUN_0576f2cc(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  
  if ((DAT_06bc0951 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9fd8);
    FUN_02f08768(
                System_Func<ValueTuple<NavigationMoveEvent_Direction,_EventModifiers,_DefaultEventSystem_LegacyInputProcessor_IInput>,_EventBase>_TypeInfo
                );
    FUN_02f08768(PTR_DAT_067cb558);
    FUN_02f08768(PTR_DAT_067c91b8);
    FUN_02f08768(PTR_DAT_067cdb50);
    FUN_02f08768(PTR_DAT_067cafa0);
    FUN_02f08768(PTR_DAT_067cab10);
    FUN_02f08768(PTR_DAT_067cab20);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<IBinding>_get_Current__);
    FUN_02f08768(PTR_DAT_067cbf00);
    DAT_06bc0951 = 1;
  }
  puVar2 = 
  System_Func<ValueTuple<NavigationMoveEvent_Direction,_EventModifiers,_DefaultEventSystem_LegacyInputProcessor_IInput>,_EventBase>_TypeInfo
  ;
  if (param_1 == (long *)0x0) {
LAB_0576f950:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar6 = thunk_FUN_02f1863c(param_1,0);
  puVar1 = PTR_DAT_067c9338;
  uVar15 = *(undefined8 *)puVar2;
  uVar14 = **(undefined8 **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
  }
  puVar4 = PTR_DAT_067cdb50;
  puVar3 = PTR_DAT_067cbf00;
  puVar2 = PTR_DAT_067c9fd8;
  uVar15 = FUN_050e4454(uVar15,0);
  uVar7 = FUN_050ed374(uVar6,uVar15,0);
  if ((uVar7 & 1) != 0) {
    lVar16 = *(long *)(puVar1 + 0x90);
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar15 = FUN_050e4454(lVar16 + 0x20,0);
    uVar7 = FUN_050edfb8(uVar6,uVar15,0);
    if ((uVar7 & 1) != 0) {
      plVar8 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
      FUN_04f77e78(plVar8,0);
      puVar1 = PTR_DAT_067cb558;
      lVar16 = thunk_FUN_02f45174(param_1,*(undefined8 *)PTR_DAT_067cb558);
      if (lVar16 != 0) {
        lVar17 = *(long *)puVar1;
        plVar9 = (long *)thunk_FUN_02f45174(param_1,lVar17);
        lVar16 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar7 != 0) {
          piVar13 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar17) {
              puVar10 = (undefined8 *)(lVar16 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0576f59c;
            }
            uVar7 = uVar7 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar7 != 0);
        }
        puVar10 = (undefined8 *)FUN_02f421d0(plVar9,lVar17,0);
LAB_0576f59c:
        plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
        puVar1 = PTR_DAT_067c91b8;
        if (plVar9 != (long *)0x0) {
          lVar16 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar7 != 0) {
            piVar13 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_067c91b8) {
                puVar10 = (undefined8 *)(lVar16 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_0576f604;
              }
              uVar7 = uVar7 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar7 != 0);
          }
          puVar10 = (undefined8 *)FUN_02f421d0(plVar9,*(long *)PTR_DAT_067c91b8,0);
LAB_0576f604:
          uVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          if ((uVar7 & 1) == 0) {
            return uVar14;
          }
          if (plVar8 != (long *)0x0) {
            FUN_04f79730(plVar8,*(undefined8 *)PTR_DAT_067cab10,0);
            lVar16 = *plVar9;
            uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar7 != 0) {
              piVar13 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                  puVar10 = (undefined8 *)(lVar16 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                  goto LAB_0576f6a0;
                }
                uVar7 = uVar7 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar7 != 0);
            }
            puVar10 = (undefined8 *)FUN_02f421d0(plVar9,*(long *)puVar1,1);
LAB_0576f6a0:
            puVar5 = Method_System_Collections_Generic_List_Enumerator<IBinding>_get_Current__;
            plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
            lVar16 = thunk_FUN_02f45174(plVar11,*(undefined8 *)puVar4);
            if (lVar16 == 0) goto LAB_0576f8f8;
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            uVar6 = FUN_050656a0(0);
            if (plVar11 != (long *)0x0) {
              uVar14 = *(undefined8 *)puVar4;
              lVar16 = thunk_FUN_02f45174(plVar11,uVar14);
              if (lVar16 == 0) {
System_Net_WebOperation__CompleteRequestWritten:
                    /* WARNING: Subroutine does not return */
                FUN_02f08d48(plVar11,uVar14);
              }
              lVar16 = *(long *)puVar4;
              plVar12 = (long *)thunk_FUN_02f45174(plVar11,lVar16);
              if (plVar12 == (long *)0x0) {
LAB_0576f960:
                    /* WARNING: Subroutine does not return */
                FUN_02f08d48(plVar11,lVar16);
              }
              lVar17 = *plVar12;
              uVar14 = *(undefined8 *)puVar3;
              uVar7 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar7 != 0) {
                piVar13 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == lVar16) goto LAB_0576f770;
                  uVar7 = uVar7 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar7 != 0);
              }
LAB_0576f75c:
              puVar10 = (undefined8 *)FUN_02f421d0(plVar12,lVar16,0);
LAB_0576f77c:
              uVar6 = (*(code *)*puVar10)(plVar12,uVar14,uVar6,puVar10[1]);
              do {
                FUN_04f79730(plVar8,uVar6,0);
                lVar16 = *plVar9;
                uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
                if (uVar7 != 0) {
                  piVar13 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                      puVar10 = (undefined8 *)(lVar16 + (long)*piVar13 * 0x10 + 0x138);
                      goto LAB_0576f7ec;
                    }
                    uVar7 = uVar7 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar7 != 0);
                }
                puVar10 = (undefined8 *)FUN_02f421d0(plVar9,*(long *)puVar1,0);
LAB_0576f7ec:
                uVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
                if ((uVar7 & 1) == 0) {
                  FUN_04f79730(plVar8,*(undefined8 *)PTR_DAT_067cab20,0);
                  lVar16 = *plVar8;
                  param_1 = plVar8;
                  goto LAB_0576f930;
                }
                FUN_04f79730(plVar8,*(undefined8 *)puVar5,0);
                lVar16 = *plVar9;
                uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
                if (uVar7 != 0) {
                  piVar13 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                      puVar10 = (undefined8 *)(lVar16 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                      goto LAB_0576f85c;
                    }
                    uVar7 = uVar7 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar7 != 0);
                }
                puVar10 = (undefined8 *)FUN_02f421d0(plVar9,*(long *)puVar1,1);
LAB_0576f85c:
                plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
                lVar16 = thunk_FUN_02f45174(plVar11,*(undefined8 *)puVar4);
                if (lVar16 != 0) goto code_r0x0576f878;
LAB_0576f8f8:
                if (plVar11 == (long *)0x0) break;
                uVar6 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
              } while( true );
            }
          }
        }
      }
      goto LAB_0576f950;
    }
  }
  lVar16 = thunk_FUN_02f45174(param_1,*(undefined8 *)puVar4);
  if (lVar16 == 0) {
    lVar16 = *param_1;
LAB_0576f930:
                    /* WARNING: Could not recover jumptable at 0x0576f94c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)(lVar16 + 0x168))(param_1,*(undefined8 *)(lVar16 + 0x170));
    return uVar6;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar6 = FUN_050656a0(0);
  uVar14 = *(undefined8 *)puVar4;
  lVar16 = thunk_FUN_02f45174(param_1,uVar14);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48(param_1,uVar14);
  }
  lVar16 = *(long *)puVar4;
  plVar8 = (long *)thunk_FUN_02f45174(param_1,lVar16);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48(param_1,lVar16);
  }
  lVar17 = *plVar8;
  uVar14 = *(undefined8 *)puVar3;
  uVar7 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar7 != 0) {
    piVar13 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == lVar16) {
        puVar10 = (undefined8 *)(lVar17 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_0576f564;
      }
      uVar7 = uVar7 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar7 != 0);
  }
  puVar10 = (undefined8 *)FUN_02f421d0(plVar8,lVar16,0);
LAB_0576f564:
                    /* WARNING: Could not recover jumptable at 0x0576f58c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (*(code *)*puVar10)(plVar8,uVar14,uVar6,puVar10[1]);
  return uVar6;
code_r0x0576f878:
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar6 = FUN_050656a0(0);
  if (plVar11 == (long *)0x0) goto LAB_0576f950;
  uVar14 = *(undefined8 *)puVar4;
  lVar16 = thunk_FUN_02f45174(plVar11,uVar14);
  if (lVar16 == 0) goto System_Net_WebOperation__CompleteRequestWritten;
  lVar16 = *(long *)puVar4;
  plVar12 = (long *)thunk_FUN_02f45174(plVar11,lVar16);
  if (plVar12 == (long *)0x0) goto LAB_0576f960;
  lVar17 = *plVar12;
  uVar14 = *(undefined8 *)puVar3;
  uVar7 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar7 == 0) goto LAB_0576f75c;
  piVar13 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
  while (*(long *)(piVar13 + -2) != lVar16) {
    uVar7 = uVar7 - 1;
    piVar13 = piVar13 + 4;
    if (uVar7 == 0) goto LAB_0576f75c;
  }
LAB_0576f770:
  puVar10 = (undefined8 *)(lVar17 + (long)*piVar13 * 0x10 + 0x138);
  goto LAB_0576f77c;
}


