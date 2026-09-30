/*
FUNCTION_NAME: FUN_059b1458
ENTRY_POINT: 059b1458
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_20;weak_xr_or_state_hits_20;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_20
*/


/* WARNING: Removing unreachable block (ram,0x059b1c5c) */

long * FUN_059b1458(long param_1,long param_2)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  byte bVar9;
  ushort uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  code *pcVar17;
  int *piVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  long lVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined8 local_68;
  
  if ((DAT_06dc14a4 & 1) == 0) {
    FUN_02d965b8(OVRPlugin_OVRP_1_120_0_TypeInfo);
    FUN_02d965b8(UnityEngine_UIElements_EventCallback<AttachToPanelEvent>_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_121_0_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0dbb0);
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(OVRPlugin_OVRP_1_122_0_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fbff8);
    FUN_02d965b8(OVRPlugin_OVRP_1_123_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_124_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_125_0_TypeInfo);
    FUN_02d965b8(UnityEngine_Events_UnityAction_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_126_0_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0e690);
    FUN_02d965b8(PTR_DAT_06a0e698);
    FUN_02d965b8(PTR_DAT_06a1e278);
    FUN_02d965b8(PTR_DAT_06a1e280);
    FUN_02d965b8(PTR_DAT_069fd8d8);
    FUN_02d965b8(OVRPlugin_OVRP_1_127_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_118_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_128_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_129_0_TypeInfo);
    DAT_06dc14a4 = 1;
  }
  local_68 = 0;
  if ((param_2 == 0) || (*(long *)(param_2 + 0x28) == 0)) goto LAB_059b1c58;
  FUN_05c0c424(*(long *)(param_2 + 0x28),0);
  uVar11 = FUN_059b0568();
  uVar19 = *(undefined8 *)(param_2 + 0x28);
  if ((uVar11 & 1) == 0) {
    plVar14 = (long *)thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a0dbb0);
    FUN_05c1616c(plVar14,uVar19,0);
    if (plVar14 == (long *)0x0) goto LAB_059b1c58;
  }
  else {
    if (*(int *)(*(long *)UnityEngine_Events_UnityAction_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar12 = FUN_058a0e60(0);
    uVar13 = FUN_053401e8(0);
    plVar14 = (long *)thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a0dbb0);
    FUN_05c16804(plVar14,uVar19,uVar12,uVar13,0);
    if (plVar14 == (long *)0x0) goto LAB_059b1c58;
    lVar20 = plVar14[0x29];
    uVar19 = thunk_FUN_02dd3144(*(undefined8 *)OVRPlugin_OVRP_1_125_0_TypeInfo);
    FUN_0533ff3c(uVar19,param_1,*(undefined8 *)OVRPlugin_OVRP_1_126_0_TypeInfo,0);
    if (lVar20 == 0) goto LAB_059b1c58;
    puVar21 = (undefined8 *)(lVar20 + 0x18);
    *puVar21 = uVar19;
    LeanTween__value(puVar21,uVar19);
  }
  puVar3 = OVRPlugin_OVRP_1_121_0_TypeInfo;
  *(undefined1 *)(plVar14 + 0x32) = 0;
  (**(code **)(*plVar14 + 0x358))(plVar14,0,*(undefined8 *)(*plVar14 + 0x360));
  uVar19 = FUN_059b1ce8(param_2);
  lVar20 = *(long *)puVar3;
  if (*(int *)(lVar20 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar20);
    lVar20 = *(long *)puVar3;
  }
  uVar11 = FUN_05507938(uVar19,*(undefined8 *)(*(long *)(lVar20 + 0xb8) + 0x18),0);
  if ((uVar11 & 1) == 0) {
    uVar19 = FUN_059b1ce8(param_2);
  }
  else {
    lVar20 = *(long *)puVar3;
    if (*(int *)(lVar20 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar20 = *(long *)puVar3;
    }
    uVar19 = *(undefined8 *)(*(long *)(lVar20 + 0xb8) + 0x10);
  }
  FUN_05c173d8(plVar14,uVar19,0);
  (**(code **)(*plVar14 + 0x1f8))
            (plVar14,*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(*plVar14 + 0x200));
  if (*(long *)(param_2 + 0x18) != 0) {
    (**(code **)(*plVar14 + 0x1d8))
              (plVar14,*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x10),
               *(undefined8 *)(*plVar14 + 0x1e0));
    lVar20 = *(long *)puVar3;
    lVar22 = plVar14[0x18];
    if (*(int *)(lVar20 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar20 = *(long *)puVar3;
    }
    uVar11 = FUN_05507938(lVar22,*(undefined8 *)(*(long *)(lVar20 + 0xb8) + 8),0);
    lVar20 = FUN_059b1d4c(param_2);
    if ((uVar11 & 1) == 0) {
      if (lVar20 == 0) goto LAB_059b1c58;
      uVar10 = FUN_059b1db8();
      bVar9 = (uVar10 & 0xff) == 0 || uVar10 < 0x100;
    }
    else {
      bVar9 = FUN_059b12dc(lVar20,lVar20);
    }
    cVar2 = *(char *)(param_1 + 0x10);
    *(byte *)(plVar14 + 0x13) = bVar9 & 1;
    pcVar17 = *(code **)(*plVar14 + 0x338);
    if (cVar2 == '\0') {
      (*pcVar17)(plVar14,0,*(undefined8 *)(*plVar14 + 0x340));
    }
    else {
      (*pcVar17)(plVar14,1);
      FUN_05c170a0(plVar14,*(undefined4 *)(param_1 + 0x28),0);
    }
    FUN_05c16a00(plVar14,*(undefined4 *)(param_1 + 0x14),0);
    (**(code **)(*plVar14 + 0x288))
              (plVar14,*(undefined1 *)(param_1 + 0x38),*(undefined8 *)(*plVar14 + 0x290));
    if (*(char *)(param_1 + 0x48) != '\0') {
      uVar19 = FUN_059b1134(param_1);
      (**(code **)(*plVar14 + 0x368))(plVar14,uVar19,*(undefined8 *)(*plVar14 + 0x370));
    }
    (**(code **)(*plVar14 + 0x248))
              (plVar14,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(*plVar14 + 0x250));
    if (*(char *)(param_1 + 0x49) == '\0') {
      uVar19 = 0;
    }
    else {
      uVar19 = *(undefined8 *)(param_1 + 0x40);
    }
    (**(code **)(*plVar14 + 0x278))(plVar14,uVar19,*(undefined8 *)(*plVar14 + 0x280));
    lVar20 = thunk_FUN_05c17538(plVar14,0);
    lVar22 = FUN_059b1d4c(param_2);
    if ((lVar22 != 0) && (uVar10 = FUN_059b1f40(), lVar20 != 0)) {
      bVar8 = (uVar10 & 0xff) == 0;
      FUN_05c2333c(lVar20,(!bVar8 && 0xfe < uVar10) && (bVar8 || uVar10 != 0xff),0);
      puVar3 = PTR_DAT_069fd8d8;
                    /* try { // try from 059b18c0 to 05ab19b7 has its CatchHandler @ 059b18c0
                       catch() { ... } // from try @ 059b18c0 with catch @ 059b18c0
                       catch() { ... } // from try @ 059b1a80 with catch @ 059b18c0
                       catch() { ... } // from try @ 059b1b50 with catch @ 059b18c0
                       catch() { ... } // from try @ 059b1ba0 with catch @ 059b18c0 */
      if (*(char *)(param_1 + 0xa0) != '\0') {
        local_68 = FUN_043372d8((char *)(param_1 + 0xa0),*(undefined8 *)PTR_DAT_06a1e280);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)puVar3);
        }
        dVar24 = (double)FUN_054ff1d8(&local_68,0);
        iVar1 = -0x80000000;
        if (dVar24 != INFINITY) {
          iVar1 = (int)dVar24;
        }
        (**(code **)(*plVar14 + 0x2a8))(plVar14,iVar1,*(undefined8 *)(*plVar14 + 0x2b0));
      }
      lVar20 = FUN_059b11ac(param_1);
      if (lVar20 != 0) {
        FUN_05c17854(plVar14,*(undefined8 *)(lVar20 + 0x28),0);
        lVar20 = (**(code **)(*plVar14 + 0x208))(plVar14,*(undefined8 *)(*plVar14 + 0x210));
        lVar22 = FUN_059b1d4c(param_2);
        puVar7 = OVRPlugin_OVRP_1_129_0_TypeInfo;
        puVar6 = OVRPlugin_OVRP_1_128_0_TypeInfo;
        puVar5 = OVRPlugin_OVRP_1_122_0_TypeInfo;
        puVar4 = OVRPlugin_OVRP_1_118_0_TypeInfo;
        puVar3 = PTR_DAT_069fbff8;
        if (lVar22 != 0) {
          plVar15 = (long *)FUN_059b20a8();
          do {
            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
                    /* try { // try from 059b19b8 to 05ab19df has its CatchHandler @ 059b1b64 */
            lVar22 = *plVar15;
            uVar11 = (ulong)*(ushort *)(lVar22 + 0x12e);
            if (uVar11 != 0) {
              piVar18 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
                  puVar21 = (undefined8 *)(lVar22 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_059b1a04;
                }
                uVar11 = uVar11 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar11 != 0);
            }
            puVar21 = (undefined8 *)FUN_02dd004c(plVar15,*(long *)puVar3,0);
LAB_059b1a04:
            uVar11 = (*(code *)*puVar21)(plVar15,puVar21[1]);
            if ((uVar11 & 1) == 0) {
              if (plVar15 == (long *)0x0) {
                return plVar14;
              }
              lVar20 = *plVar15;
              uVar11 = (ulong)*(ushort *)(lVar20 + 0x12e);
              if (uVar11 == 0) goto LAB_059b1bf8;
              piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
              goto LAB_059b1be0;
            }
            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
                    /* try { // try from 059b1a1c to 05ab1a7f has its CatchHandler @ 059b1b68 */
            lVar22 = *plVar15;
            uVar11 = (ulong)*(ushort *)(lVar22 + 0x12e);
            if (uVar11 != 0) {
              piVar18 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)puVar5) {
                  puVar21 = (undefined8 *)(lVar22 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_059b1a68;
                }
                uVar11 = uVar11 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar11 != 0);
            }
            puVar21 = (undefined8 *)FUN_02dd004c(plVar15,*(long *)puVar5,0);
LAB_059b1a68:
            auVar25 = (*(code *)*puVar21)(plVar15,puVar21[1]);
            uVar12 = auVar25._8_8_;
            uVar19 = auVar25._0_8_;
                    /* try { // try from 059b1a80 to 05ab1b3f has its CatchHandler @ 059b18c0 */
            uVar11 = thunk_FUN_0536b75c(uVar19,*(undefined8 *)puVar6,0);
            if ((uVar11 & 1) == 0) {
              uVar11 = thunk_FUN_0536b75c(uVar19,*(undefined8 *)puVar7,0);
              if ((uVar11 & 1) != 0) {
                lVar22 = *(long *)puVar4;
                if (*(int *)(lVar22 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                  lVar22 = *(long *)puVar4;
                }
                puVar21 = *(undefined8 **)(lVar22 + 0xb8);
                lVar23 = puVar21[2];
                if (lVar23 == 0) {
                  if (*(int *)(lVar22 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                    puVar21 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
                  }
                  uVar13 = *puVar21;
                  lVar23 = thunk_FUN_02dd3144(*(undefined8 *)
                                               UnityEngine_UIElements_EventCallback<AttachToPanelEvent>_TypeInfo
                                             );
                  FUN_03b7820c(lVar23,uVar13,*(undefined8 *)OVRPlugin_OVRP_1_127_0_TypeInfo,0);
                  plVar16 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
                  *plVar16 = lVar23;
                  LeanTween__value(plVar16,lVar23);
                }
                uVar12 = FUN_036170b4(uVar12,lVar23,*(undefined8 *)OVRPlugin_OVRP_1_120_0_TypeInfo);
              }
              auVar25 = FUN_059b217c(uVar19,uVar12);
              lVar22 = auVar25._0_8_;
              if (lVar22 != 0) {
                if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860(lVar22,auVar25._8_8_,lVar22);
                }
                FUN_05ced510(lVar20,uVar19,lVar22,0);
              }
            }
            else {
              lVar22 = FUN_059b1d4c(param_2);
              if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              uVar19 = FUN_059b2114();
              FUN_05c16e4c(plVar14,uVar19,0);
            }
          } while( true );
        }
      }
    }
  }
LAB_059b1c58:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar18 = piVar18 + 4;
    if (uVar11 == 0) break;
LAB_059b1be0:
    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar21 = (undefined8 *)(lVar20 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_059b1c14;
    }
  }
LAB_059b1bf8:
  puVar21 = (undefined8 *)FUN_02dd004c(plVar15,*(long *)PTR_DAT_069fbff0,0);
LAB_059b1c14:
  (*(code *)*puVar21)(plVar15,puVar21[1]);
  return plVar14;
}


