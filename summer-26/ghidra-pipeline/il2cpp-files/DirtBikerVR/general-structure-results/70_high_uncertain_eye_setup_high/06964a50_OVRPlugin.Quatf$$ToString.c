/*
FUNCTION_NAME: OVRPlugin.Quatf$$ToString
ENTRY_POINT: 06964a50
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Quatf__ToString(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar16;
  long lVar17;
  
                    /* catch() { ... } // from try @ 069649f0 with catch @ 06964a50 */
                    /* catch() { ... } // from try @ 069649e0 with catch @ 06964a54 */
                    /* catch() { ... } // from try @ 06964968 with catch @ 06964a58 */
  FUN_03a8a718(PTR_DAT_084b6e28);
                    /* catch() { ... } // from try @ 06964958 with catch @ 06964a5c */
                    /* catch() { ... } // from try @ 069648ac with catch @ 06964a60 */
                    /* catch() { ... } // from try @ 06964850 with catch @ 06964a64 */
  FUN_03a8a718(PTR_DAT_08487ab8);
                    /* catch() { ... } // from try @ 069647ec with catch @ 06964a68 */
                    /* catch() { ... } // from try @ 06964928 with catch @ 06964a6c */
                    /* catch() { ... } // from try @ 06964824 with catch @ 06964a70 */
  FUN_03a8a718(PTR_DAT_084b5d60);
                    /* catch() { ... } // from try @ 06964904 with catch @ 06964a74 */
                    /* catch() { ... } // from try @ 069649c4 with catch @ 06964a78 */
                    /* catch() { ... } // from try @ 069648ec with catch @ 06964a7c */
  FUN_03a8a718(PTR_DAT_08487a70);
                    /* catch() { ... } // from try @ 069649c0 with catch @ 06964a80 */
                    /* catch() { ... } // from try @ 069648dc with catch @ 06964a84 */
                    /* catch() { ... } // from try @ 069648b0 with catch @ 06964a88 */
  FUN_03a8a718(PTR_DAT_084b6e30);
                    /* catch() { ... } // from try @ 0696488c with catch @ 06964a8c */
                    /* catch() { ... } // from try @ 0696493c with catch @ 06964a90 */
                    /* catch() { ... } // from try @ 0696487c with catch @ 06964a94 */
  FUN_03a8a718(PTR_DAT_0848eb10);
                    /* catch() { ... } // from try @ 06964864 with catch @ 06964a98 */
                    /* catch() { ... } // from try @ 06964808 with catch @ 06964a9c
                       catch() { ... } // from try @ 069648d8 with catch @ 06964a9c
                       catch() { ... } // from try @ 06964940 with catch @ 06964a9c
                       catch() { ... } // from try @ 069649c8 with catch @ 06964a9c */
  FUN_03a8a718(PTR_DAT_08486c60);
  FUN_03a8a718(PTR_DAT_08486738);
                    /* try { // try from 06964ab4 to 06a64acb has its CatchHandler @ 06964b74 */
  FUN_03a8a718(PTR_DAT_08487fd0);
  *(undefined1 *)(unaff_x20 + 0xad) = 1;
  iVar10 = *(int *)(unaff_x19 + 0x10);
  lVar17 = *(long *)(unaff_x19 + 0x20);
                    /* try { // try from 06964acc to 06a64b63 has its CatchHandler @ 06964758 */
  if (iVar10 == 2) {
LAB_06964ae0:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (lVar17 == 0) goto LAB_06964e10;
    uVar16 = *(undefined8 *)(lVar17 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar11 = FUN_07c9e200(uVar16,0,0);
    if ((uVar11 & 1) != 0) {
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x18),0);
      uVar9 = 1;
LAB_06964eb0:
      *(undefined4 *)(unaff_x19 + 0x10) = uVar9;
      return 1;
    }
  }
  else {
    if (iVar10 != 1) {
      if (iVar10 != 0) {
        return 0;
      }
      goto LAB_06964ae0;
    }
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (lVar17 == 0) goto LAB_06964e10;
  }
  puVar2 = PTR_DAT_0848eb10;
  if (((*(long *)(lVar17 + 0x28) != 0) &&
      (lVar14 = *(long *)(*(long *)(lVar17 + 0x28) + 0x30), lVar14 != 0)) &&
     (lVar13 = *(long *)(lVar17 + 0x70), lVar13 != 0)) {
    iVar10 = *(int *)(lVar14 + 0x18);
                    /* try { // try from 06964b64 to 06a64b73 has its CatchHandler @ 06964b74 */
    if (*(int *)(lVar13 + 0x18) == iVar10) {
      if (0 < iVar10) {
                    /* catch() { ... } // from try @ 06964ab4 with catch @ 06964b74
                       catch() { ... } // from try @ 06964b64 with catch @ 06964b74 */
        iVar7 = 0;
                    /* try { // try from 06964b78 to 06a64b7b has its CatchHandler @ 06964b84 */
        do {
                    /* try { // try from 06964b7c to 06a64b87 has its CatchHandler @ 06964758 */
          if (*(long *)(lVar17 + 0x70) == 0) goto LAB_06964e10;
                    /* catch() { ... } // from try @ 06964b78 with catch @ 06964b84 */
          FUN_04d8bee8(*(long *)(lVar17 + 0x70),iVar7,0,*(undefined8 *)puVar2);
          iVar7 = iVar7 + 1;
        } while (iVar10 != iVar7);
      }
    }
    else {
      *(undefined4 *)(lVar13 + 0x18) = 0;
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      puVar2 = PTR_DAT_08487118;
      if (0 < iVar10) {
        do {
          lVar14 = *(long *)(lVar17 + 0x70);
          if (lVar14 == 0) goto LAB_06964e10;
          lVar13 = *(long *)(lVar14 + 0x10);
          lVar15 = *(long *)puVar2;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar13 == 0) goto LAB_06964e10;
          uVar1 = *(uint *)(lVar14 + 0x18);
          if (uVar1 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar13 + (long)(int)uVar1 * 4 + 0x20) = 0;
          }
          else {
            FUN_04d8c18c(lVar14,0,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70)
                        );
          }
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
    }
    puVar6 = PTR_DAT_084b5d60;
    puVar5 = PTR_DAT_0848eb10;
    puVar4 = PTR_DAT_08487a70;
    puVar2 = PTR_DAT_08486738;
    lVar14 = *(long *)(lVar17 + 0x10);
    if (lVar14 != 0) {
      iVar10 = 0;
      while (*(long *)(lVar14 + 0xe8) != 0) {
        iVar7 = FUN_06936294(*(long *)(lVar14 + 0xe8),0);
        puVar3 = PTR_DAT_08486c60;
        if (iVar7 <= iVar10) {
          lVar14 = *(long *)(lVar17 + 0x70);
          if (lVar14 != 0) {
            iVar10 = 0;
            iVar7 = -0x80000000;
            goto LAB_06964dc0;
          }
          break;
        }
        if (((*(long *)(lVar17 + 0x10) == 0) ||
            (lVar14 = *(long *)(*(long *)(lVar17 + 0x10) + 0xe8), lVar14 == 0)) ||
           (lVar14 = *(long *)(lVar14 + 0x58), lVar14 == 0)) break;
        lVar14 = FUN_04de82e0(lVar14,iVar10,*(undefined8 *)puVar6);
        if (((*(long *)(lVar17 + 0x10) == 0) || (lVar14 == 0)) ||
           (lVar13 = *(long *)(*(long *)(lVar17 + 0x10) + 0xd0), lVar13 == 0)) break;
        FUN_069641d0(lVar13,*(undefined8 *)(lVar14 + 0x80),lVar14 + 0x70,lVar14 + 0x78);
        iVar7 = *(int *)(lVar14 + 0x70);
        if (iVar7 < 0) {
          if (((*(long *)(lVar17 + 0x28) == 0) ||
              (lVar13 = *(long *)(*(long *)(lVar17 + 0x28) + 0x28), lVar13 == 0)) ||
             (plVar12 = *(long **)(lVar14 + 0x80), plVar12 == (long *)0x0)) break;
          (**(code **)(*plVar12 + 0x408))
                    (plVar12,*(undefined8 *)(lVar13 + 0x50),*(undefined8 *)(*plVar12 + 0x410));
          if ((*(long *)(lVar17 + 0x28) == 0) ||
             (lVar13 = *(long *)(*(long *)(lVar17 + 0x28) + 0x28), lVar13 == 0)) break;
LAB_06964d88:
          FUN_0694cef4(*(undefined4 *)(lVar13 + 0x58),lVar14,0);
        }
        else {
          lVar13 = *(long *)(lVar17 + 0x70);
          if (lVar13 == 0) break;
          iVar8 = FUN_04d8be94(lVar13,iVar7,*(undefined8 *)puVar4);
          FUN_04d8bee8(lVar13,iVar7,iVar8 + 1,*(undefined8 *)puVar5);
          if (*(long *)(lVar14 + 0x78) == 0) break;
          uVar16 = *(undefined8 *)(*(long *)(lVar14 + 0x78) + 0x50);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar11 = FUN_07c9c218(uVar16,0,0);
          if ((uVar11 & 1) != 0) {
            if ((*(long *)(lVar14 + 0x78) != 0) &&
               (plVar12 = *(long **)(lVar14 + 0x80), plVar12 != (long *)0x0)) {
              (**(code **)(*plVar12 + 0x408))
                        (plVar12,*(undefined8 *)(*(long *)(lVar14 + 0x78) + 0x50),
                         *(undefined8 *)(*plVar12 + 0x410));
              lVar13 = *(long *)(lVar14 + 0x78);
              if (lVar13 != 0) goto LAB_06964d88;
            }
            break;
          }
        }
        lVar14 = *(long *)(lVar17 + 0x10);
        iVar10 = iVar10 + 1;
        if (lVar14 == 0) break;
      }
    }
  }
LAB_06964e10:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
  while( true ) {
    uVar9 = FUN_04d8be94(lVar14,iVar10,*(undefined8 *)puVar4);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)puVar3);
    }
    iVar7 = FUN_06751c44(iVar7,uVar9,0);
    lVar14 = *(long *)(lVar17 + 0x70);
    iVar10 = iVar10 + 1;
    if (lVar14 == 0) break;
LAB_06964dc0:
    if (*(int *)(lVar14 + 0x18) <= iVar10) {
      if ((iVar7 == 0) ||
         (iVar10 = FUN_04d8ce18(lVar14,iVar7,*(undefined8 *)PTR_DAT_0848c620), iVar10 < 0)) {
        uVar16 = 0;
        *(undefined8 *)(lVar17 + 0x78) = 0;
      }
      else {
        if (((*(long *)(lVar17 + 0x28) == 0) ||
            (lVar14 = *(long *)(*(long *)(lVar17 + 0x28) + 0x30), lVar14 == 0)) ||
           (lVar14 = FUN_04de82e0(lVar14,iVar10,*(undefined8 *)PTR_DAT_084b6e30), lVar14 == 0))
        break;
        uVar16 = *(undefined8 *)(lVar14 + 0x18);
        *(undefined8 *)(lVar17 + 0x78) = uVar16;
      }
      thunk_FUN_03afed3c(lVar17 + 0x78,uVar16);
      uVar9 = *(undefined4 *)(lVar17 + 0x30);
      uVar16 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487fd0);
      FUN_07ca4ee0(uVar9,uVar16,0);
      *(undefined8 *)(unaff_x19 + 0x18) = uVar16;
      thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x18),uVar16);
      uVar9 = 2;
      goto LAB_06964eb0;
    }
  }
  goto LAB_06964e10;
}


