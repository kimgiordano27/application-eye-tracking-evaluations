/*
FUNCTION_NAME: FUN_07f49638
ENTRY_POINT: 07f49638
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x07f497a8) */

void FUN_07f49638(undefined1 param_1 [16],float param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  int *piVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  
  if ((DAT_0899b27d & 1) == 0) {
    FUN_03a8a718(Method_System_Collections_Generic_Dictionary<string,_List<VivoxParticipant>>_Add__)
    ;
    FUN_03a8a718(
                Method_System_Collections_Generic_Dictionary<string,_List<VivoxParticipant>>_ContainsKey__
                );
    FUN_03a8a718(
                Method_System_Collections_Generic_Dictionary<string,_List<VivoxParticipant>>_Remove__
                );
    FUN_03a8a718(
                Method_System_Collections_Generic_Dictionary<string,_List<VivoxParticipant>>_TryGetValue__
                );
    FUN_03a8a718(
                Method_System_Collections_Generic_Dictionary<string,_List<VivoxParticipant>>_get_Count__
                );
    FUN_03a8a718(
                Method_System_Collections_Generic_Dictionary<string,_List<VivoxParticipant>>_get_Item__
                );
    FUN_03a8a718(Method_System_Collections_Generic_Dictionary<string,_List<int>>_GetEnumerator__);
    FUN_03a8a718(PTR_DAT_08493d98);
    FUN_03a8a718(
                Method_System_Collections_Generic_Dictionary<string,_List<VivoxParticipant>>_get_Keys__
                );
    FUN_03a8a718(
                Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>__ctor__
                );
    FUN_03a8a718(
                Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>_GetEnumerator__
                );
    FUN_03a8a718(
                Method_System_Collections_Generic_Dictionary<string,_List<RosterItem>>_ContainsKey__
                );
    FUN_03a8a718(PTR_DAT_08491a00);
    FUN_03a8a718(
                Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>_TryGetValue__
                );
    DAT_0899b27d = 1;
  }
  puVar5 = Method_System_Collections_Generic_Dictionary<string,_List<VivoxParticipant>>_get_Keys__;
  puVar4 = Method_System_Collections_Generic_Dictionary<string,_List<RosterItem>>_ContainsKey__;
  puVar3 = Method_System_Collections_Generic_Dictionary<string,_List<int>>_GetEnumerator__;
  puVar2 = PTR_DAT_08491a00;
  local_a0 = 0;
  local_98 = 0;
  bVar6 = true;
  plVar12 = (long *)PTR_DAT_08493d98;
  puVar15 = (undefined8 *)
            Method_System_Collections_Generic_Dictionary<string,_List<VivoxParticipant>>_TryGetValue__
  ;
  puVar21 = (undefined8 *)
            Method_System_Collections_Generic_Dictionary<string,_List<VivoxParticipant>>_Add__;
LAB_07f49760:
  do {
    do {
      do {
        uVar9 = FUN_07cf3eac(*(undefined8 *)(param_3 + 0x48),0);
        if ((uVar9 & 1) == 0) {
          return;
        }
        if (*(long *)(param_3 + 0x48) == 0) goto LAB_07f49d70;
        iVar7 = FUN_07cf38cc(*(long *)(param_3 + 0x48),0);
      } while (iVar7 == 0xb);
      if (*(long *)(param_3 + 0x48) == 0) goto LAB_07f49d70;
      iVar7 = FUN_07cf38cc(*(long *)(param_3 + 0x48),0);
    } while (iVar7 == 7);
    if (*(long *)(param_3 + 0x48) == 0) goto LAB_07f49d70;
    iVar7 = FUN_07cf38cc(*(long *)(param_3 + 0x48),0);
  } while (iVar7 == 8);
  lVar10 = *(long *)(param_3 + 0x48);
  if (bVar6) {
    if (lVar10 == 0) goto LAB_07f49d70;
    uVar8 = FUN_07cf305c(lVar10,0);
  }
  else {
    if (lVar10 == 0) goto LAB_07f49d70;
    uVar1 = *(uint *)(param_3 + 0x14);
    uVar8 = FUN_07cf305c(lVar10,0);
    uVar8 = uVar8 | uVar1;
  }
  *(uint *)(param_3 + 0x14) = uVar8;
  if (*(long *)(param_3 + 0x48) == 0) goto LAB_07f49d70;
  iVar7 = FUN_07cf38cc(*(long *)(param_3 + 0x48),0);
  if (iVar7 != 5) {
    if (*(long *)(param_3 + 0x48) == 0) goto LAB_07f49d70;
    iVar7 = FUN_07cf38cc(*(long *)(param_3 + 0x48),0);
    if (iVar7 != 4) {
      if (*(long *)(param_3 + 0x48) == 0) goto LAB_07f49d70;
      iVar7 = FUN_07cf38cc(*(long *)(param_3 + 0x48),0);
      if (iVar7 == 6) {
        plVar11 = (long *)FUN_07f4822c(param_3);
        if (plVar11 == (long *)0x0) goto LAB_07f49d70;
        lVar10 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar9 != 0) {
          piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
              puVar13 = (undefined8 *)(lVar10 + (long)(*piVar16 + 9) * 0x10 + 0x138);
              goto LAB_07f49988;
            }
            uVar9 = uVar9 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar9 != 0);
        }
        puVar13 = (undefined8 *)FUN_03ac43c4(plVar11,*(long *)puVar3,9);
LAB_07f49988:
        uVar22 = (*(code *)*puVar13)(plVar11,puVar13[1]);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        fVar23 = (float)FUN_07e4d9a8(uVar22,&local_98,0);
        if (*(long *)(param_3 + 0x48) == 0) goto LAB_07f49d70;
        fVar27 = *(float *)(param_3 + 0x24);
        fVar28 = *(float *)(param_3 + 0x28);
        fVar26 = param_2;
        uVar22 = FUN_07cf2e00(*(long *)(param_3 + 0x48),0);
        lVar10 = *plVar12;
        lVar17 = *(long *)(param_3 + 0x50);
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(lVar10);
          lVar10 = *plVar12;
        }
        uVar19 = local_98;
        lVar18 = *(long *)puVar4;
        uVar24 = *(undefined4 *)(*(long *)(lVar10 + 0xb8) + 8);
        if (*(int *)(lVar18 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          lVar18 = *(long *)puVar4;
        }
        puVar13 = *(undefined8 **)(lVar18 + 0xb8);
        lVar10 = puVar13[2];
        if (lVar10 == 0) {
          if (*(int *)(lVar18 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            puVar13 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
          }
          uVar20 = *puVar13;
          lVar10 = thunk_FUN_03ac74bc(*(undefined8 *)
                                       Method_System_Collections_Generic_Dictionary<string,_List<VivoxParticipant>>_get_Item__
                                     );
          FUN_04970eec(lVar10,uVar20,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>__ctor__
                       ,0);
          plVar12 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
          *plVar12 = lVar10;
          thunk_FUN_03afed3c(plVar12,lVar10);
          puVar21 = (undefined8 *)
                    Method_System_Collections_Generic_Dictionary<string,_List<VivoxParticipant>>_Add__
          ;
        }
        local_a8 = 0;
        local_b0 = 0;
        FUN_05b669a4(uVar22,fVar26,&local_b0,*(uint *)(param_3 + 0x14) & 0xf,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>_TryGetValue__
                    );
        if (lVar17 == 0) goto LAB_07f49d70;
        FUN_044a4160(fVar23,param_2,0,fVar23 - fVar27,param_2 - fVar28,0,lVar17,uVar24,uVar19,lVar10
                     ,local_b0,local_a8,0,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<string,_List<VivoxParticipant>>_Remove__
                    );
      }
      else {
        if ((*(char *)(param_3 + 0x10) == '\0') && (*(char *)(param_3 + 0x11) == '\0')) {
          if (*(long *)(param_3 + 0x48) == 0) goto LAB_07f49d70;
          iVar7 = FUN_07cf2f44(*(long *)(param_3 + 0x48),0);
          if (iVar7 == 0) goto LAB_07f49940;
        }
        else {
LAB_07f49940:
          if (*(long *)(param_3 + 0x48) == 0) goto LAB_07f49d70;
          iVar7 = FUN_07cf38cc(*(long *)(param_3 + 0x48),0);
          if (iVar7 != 0x14) {
            if (*(long *)(param_3 + 0x48) == 0) goto LAB_07f49d70;
            iVar7 = FUN_07cf38cc(*(long *)(param_3 + 0x48),0);
            bVar6 = false;
            if (iVar7 != 0x15) goto LAB_07f49760;
          }
        }
        if (*(long *)(param_3 + 0x48) == 0) goto LAB_07f49d70;
        iVar7 = FUN_07cf2f44(*(long *)(param_3 + 0x48),0);
        if (iVar7 == 0) {
          lVar10 = *plVar12;
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            lVar10 = *plVar12;
          }
          puVar14 = (undefined4 *)(*(long *)(lVar10 + 0xb8) + 8);
        }
        else {
          if (*(long *)(param_3 + 0x48) == 0) goto LAB_07f49d70;
          iVar7 = FUN_07cf2f44(*(long *)(param_3 + 0x48),0);
          lVar10 = *plVar12;
          if (iVar7 == 1) {
            if (*(int *)(lVar10 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
              lVar10 = *plVar12;
            }
            puVar14 = (undefined4 *)(*(long *)(lVar10 + 0xb8) + 0xc);
          }
          else {
            if (*(int *)(lVar10 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
              lVar10 = *plVar12;
            }
            puVar14 = (undefined4 *)(*(long *)(lVar10 + 0xb8) + 0x14);
          }
        }
        if (*(long *)(param_3 + 0x48) == 0) goto LAB_07f49d70;
        uVar22 = *puVar14;
        uVar24 = FUN_07cf2cbc(*(long *)(param_3 + 0x48),0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar24 = FUN_07e4da28(uVar24,param_2,&local_a0,0);
        if (*(long *)(param_3 + 0x48) == 0) goto LAB_07f49d70;
        fVar23 = param_2;
        uVar25 = FUN_07cf2e00(*(long *)(param_3 + 0x48),0);
        uVar19 = local_a0;
        lVar10 = *(long *)puVar4;
        lVar17 = *(long *)(param_3 + 0x50);
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          lVar10 = *(long *)puVar4;
        }
        puVar15 = *(undefined8 **)(lVar10 + 0xb8);
        lVar18 = puVar15[3];
        if (lVar18 == 0) {
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            puVar15 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
          }
          uVar20 = *puVar15;
          lVar18 = thunk_FUN_03ac74bc(*(undefined8 *)
                                       Method_System_Collections_Generic_Dictionary<string,_List<VivoxParticipant>>_get_Count__
                                     );
          FUN_049711ac(lVar18,uVar20,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>_GetEnumerator__
                       ,0);
          plVar12 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
          *plVar12 = lVar18;
          thunk_FUN_03afed3c(plVar12,lVar18);
        }
        lVar10 = *(long *)(param_3 + 0x48);
        if (lVar10 == 0) goto LAB_07f49d70;
        iVar7 = FUN_07cf38cc(lVar10,0);
        if (iVar7 == 0) {
          bVar6 = true;
        }
        else {
          if (*(long *)(param_3 + 0x48) == 0) goto LAB_07f49d70;
          iVar7 = FUN_07cf38cc(*(long *)(param_3 + 0x48),0);
          bVar6 = iVar7 == 0x1e;
        }
        if (lVar17 == 0) goto LAB_07f49d70;
        FUN_044a6c50(uVar24,param_2,0,uVar25,fVar23,0,lVar17,uVar22,uVar19,lVar18,lVar10,bVar6,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<string,_List<VivoxParticipant>>_ContainsKey__
                    );
        puVar15 = (undefined8 *)
                  Method_System_Collections_Generic_Dictionary<string,_List<VivoxParticipant>>_TryGetValue__
        ;
      }
      bVar6 = false;
      plVar12 = (long *)PTR_DAT_08493d98;
      goto LAB_07f49760;
    }
  }
  lVar10 = *(long *)puVar4;
  lVar17 = *(long *)(param_3 + 0x50);
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar10 = *(long *)puVar4;
  }
  puVar13 = *(undefined8 **)(lVar10 + 0xb8);
  lVar18 = puVar13[1];
  if (lVar18 == 0) {
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar13 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar19 = *puVar13;
    lVar18 = thunk_FUN_03ac74bc(*puVar15);
    FUN_049639e4(lVar18,uVar19,*(undefined8 *)puVar5,0);
    plVar11 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    *plVar11 = lVar18;
    thunk_FUN_03afed3c(plVar11,lVar18);
  }
  if (lVar17 == 0) {
LAB_07f49d70:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_044a3354(lVar17,lVar18,*(undefined8 *)(param_3 + 0x48),*puVar21);
  FUN_07f4a118(param_3,*(undefined8 *)(param_3 + 0x48),*(undefined4 *)(param_3 + 0x14));
  bVar6 = false;
  goto LAB_07f49760;
}


