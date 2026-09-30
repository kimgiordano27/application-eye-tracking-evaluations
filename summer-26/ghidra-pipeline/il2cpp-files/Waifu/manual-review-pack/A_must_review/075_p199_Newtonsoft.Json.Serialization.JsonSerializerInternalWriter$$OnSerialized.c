/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$OnSerialized
ENTRY_POINT: 06864614
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__OnSerialized(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  int in_w9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar15;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long lVar16;
  long unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  ulong unaff_x28;
  uint unaff_w29;
  uint in_stack_00000008;
  
code_r0x06864614:
  if (in_w9 == 0) {
    FUN_033b9870(param_1);
  }
  uVar9 = FUN_0686498c(unaff_x23,unaff_x22);
  if ((uVar9 & 1) != 0) goto LAB_06864650;
LAB_06864678:
  iVar5 = *(int *)(unaff_x19 + 0x18);
  while( true ) {
    if ((int)unaff_x28 == iVar5) {
      uVar13 = *(uint *)(unaff_x20 + 3);
      if (uVar13 <= unaff_w29) goto LAB_068648ac;
      lVar15 = *unaff_x25;
      if (lVar15 != 0) {
        lVar10 = FUN_0339898c(lVar15,*(undefined8 *)(*unaff_x20 + 0x40));
        if (lVar10 == 0) {
          uVar12 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
          FUN_033d1c20(uVar12,0);
        }
        uVar13 = *(uint *)(unaff_x20 + 3);
      }
      if (uVar13 <= in_stack_00000008) goto LAB_068648ac;
      plVar6 = unaff_x20 + (long)(int)in_stack_00000008 + 4;
      *plVar6 = lVar15;
      in_stack_00000008 = in_stack_00000008 + 1;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar6 >> 0x12 & 0x7fff);
        do {
                    /* try { // try from 06864704 to 06964707 has its CatchHandler @ 06864870 */
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar6 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    do {
      unaff_w29 = unaff_w29 + 1;
      uVar13 = (uint)unaff_x20[3];
      if ((int)uVar13 <= (int)unaff_w29) {
        if (in_stack_00000008 == 0) {
          return 0;
        }
                    /* try { // try from 0686472c to 0696473f has its CatchHandler @ 06864858 */
        if (in_stack_00000008 == 1) {
          if (uVar13 != 0) {
            return unaff_x20[4];
          }
          goto LAB_068648ac;
        }
                    /* try { // try from 06864748 to 06964757 has its CatchHandler @ 0686484c */
        lVar15 = FUN_03398188(DAT_083c7838,*(undefined4 *)(unaff_x19 + 0x18));
        iVar5 = *(int *)(unaff_x19 + 0x18);
                    /* try { // try from 06864764 to 0696476b has its CatchHandler @ 06864854 */
        if (iVar5 < 1) goto LAB_06864794;
        if (lVar15 == 0) goto LAB_068648b0;
        uVar13 = *(uint *)(lVar15 + 0x18);
        uVar9 = 0;
        goto LAB_0686477c;
      }
      if (uVar13 <= unaff_w29) goto LAB_068648ac;
      unaff_x25 = unaff_x20 + (long)(int)unaff_w29 + 4;
      plVar6 = (long *)*unaff_x25;
      if (((plVar6 == (long *)0x0) ||
          (unaff_x21 = (**(code **)(*plVar6 + 1000))(plVar6,*(undefined8 *)(*plVar6 + 0x3f0)),
          unaff_x21 == 0)) || (unaff_x19 == 0)) goto LAB_068648b0;
      iVar5 = *(int *)(unaff_x21 + 0x18);
    } while (iVar5 != *(int *)(unaff_x19 + 0x18));
    if (0 < iVar5) break;
    unaff_x28 = 0;
  }
  unaff_x28 = 0;
  unaff_x27 = unaff_x21 + 0x20;
  do {
    plVar6 = *(long **)(unaff_x27 + unaff_x28 * 8);
    if (plVar6 == (long *)0x0) {
LAB_068648b0:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0));
    uVar13 = (uint)unaff_x28;
    if ((*(uint *)(unaff_x19 + 0x18) <= uVar13) || (*(uint *)(unaff_x21 + 0x18) <= uVar13))
    goto LAB_068648ac;
    uVar9 = FUN_06744d80(*(undefined8 *)(unaff_x26 + unaff_x28 * 8),
                         *(undefined8 *)(unaff_x27 + unaff_x28 * 8),0);
    uVar12 = DAT_083bd010;
    if ((uVar9 & 1) == 0) {
      if (*(int *)(*(long *)(unaff_x24 + 0x3b8) + 0xe0) == 0) {
        FUN_033b9870();
      }
      plVar7 = (long *)FUN_0683eca4(uVar12,0);
      if (plVar7 != plVar6) {
        if (*(uint *)(unaff_x19 + 0x18) <= uVar13) goto LAB_068648ac;
        plVar7 = *(long **)(unaff_x26 + unaff_x28 * 8);
        if (plVar7 != (long *)0x0) {
          if ((*(byte *)(DAT_083d11c8 + 0x130) <= *(byte *)(*plVar7 + 0x130)) &&
             (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(DAT_083d11c8 + 0x130) * 8 + -8)
              == DAT_083d11c8)) {
            if (*(uint *)(unaff_x20 + 3) <= unaff_w29) goto LAB_068648ac;
            plVar8 = (long *)*unaff_x25;
            if (plVar8 == (long *)0x0) goto LAB_06864678;
            lVar15 = *plVar8;
            if ((*(byte *)(lVar15 + 0x130) < *(byte *)(DAT_083cedb0 + 0x130)) ||
               (*(long *)(*(long *)(lVar15 + 200) + (ulong)*(byte *)(DAT_083cedb0 + 0x130) * 8 + -8)
                != DAT_083cedb0)) goto LAB_06864678;
            uVar12 = (**(code **)(lVar15 + 0x348))(plVar8,*(undefined8 *)(lVar15 + 0x350));
            plVar7 = (long *)FUN_0674522c(plVar7,uVar12);
            if (*(int *)(*(long *)(unaff_x24 + 0x3b8) + 0xe0) == 0) {
              FUN_033b9870(*(long *)(unaff_x24 + 0x3b8));
            }
            if (plVar7 == (long *)0x0) goto LAB_06864678;
          }
        }
        if (plVar6 == (long *)0x0) goto LAB_068648b0;
        uVar9 = (**(code **)(*plVar6 + 0x608))(plVar6,*(undefined8 *)(*plVar6 + 0x610));
        if ((uVar9 & 1) != 0) {
          if ((plVar7 == (long *)0x0) ||
             (lVar15 = (**(code **)(*plVar7 + 0x338))(plVar7,*(undefined8 *)(*plVar7 + 0x340)),
             lVar15 == 0)) goto LAB_068648b0;
          uVar9 = FUN_06848930(lVar15,0);
          if ((uVar9 & 1) == 0) goto LAB_06864678;
          unaff_x23 = (**(code **)(*plVar7 + 0x338))(plVar7,*(undefined8 *)(*plVar7 + 0x340));
          unaff_x22 = (**(code **)(*plVar6 + 0x338))(plVar6,*(undefined8 *)(*plVar6 + 0x340));
          in_w9 = *(int *)(DAT_083ca578 + 0xe0);
          param_1 = DAT_083ca578;
          goto code_r0x06864614;
        }
        uVar9 = (**(code **)(*plVar6 + 0x2b8))(plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x2c0));
        if ((uVar9 & 1) == 0) goto LAB_06864678;
      }
    }
LAB_06864650:
                    /* try { // try from 06864654 to 06964703 has its CatchHandler @ 06864654
                       catch() { ... } // from try @ 06864654 with catch @ 06864654
                       catch() { ... } // from try @ 06864994 with catch @ 06864654
                       catch() { ... } // from try @ 06864b14 with catch @ 06864654
                       catch() { ... } // from try @ 06864b7c with catch @ 06864654
                       catch() { ... } // from try @ 06864be8 with catch @ 06864654 */
    if (*(int *)(unaff_x19 + 0x18) <= (int)unaff_x28 + 1) break;
    unaff_x28 = unaff_x28 + 1;
    if (*(uint *)(unaff_x21 + 0x18) <= (uint)unaff_x28) goto LAB_068648ac;
  } while( true );
  unaff_x28 = (ulong)((int)unaff_x28 + 1);
  goto LAB_06864678;
  while( true ) {
    *(int *)(lVar15 + 0x20 + uVar9 * 4) = (int)uVar9;
    uVar9 = uVar9 + 1;
    if ((long)iVar5 == uVar9) break;
LAB_0686477c:
    if (uVar13 == uVar9) goto LAB_068648ac;
  }
LAB_06864794:
  if ((int)in_stack_00000008 < 2) {
    uVar13 = 0;
  }
  else {
    uVar14 = (ulong)in_stack_00000008 - 1;
    uVar13 = 0;
    uVar9 = 1;
    do {
      bVar4 = false;
      while( true ) {
        while( true ) {
                    /* try { // try from 068647d4 to 069647ef has its CatchHandler @ 06864848 */
          if (((uint)unaff_x20[3] <= uVar13) || ((unaff_x20[3] & 0xffffffffU) <= uVar9))
          goto LAB_068648ac;
          lVar16 = unaff_x20[(long)(int)uVar13 + 4];
          lVar10 = unaff_x20[uVar9 + 4];
          if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
            FUN_033b9870();
          }
          iVar5 = FUN_06861580(lVar16,lVar15,0,lVar10,lVar15,0);
          if (iVar5 != 0) break;
          bVar4 = true;
          bVar3 = uVar14 == uVar9;
          uVar9 = uVar9 + 1;
          if (bVar3) goto LAB_06864958;
        }
        if (iVar5 == 2) break;
        uVar9 = uVar9 + 1;
        if (in_stack_00000008 == uVar9) {
          if (bVar4) {
LAB_06864958:
            FUN_033d1ba8(&DAT_083c8758);
            uVar11 = thunk_FUN_03398a84();
            uVar12 = FUN_033d1ba8(&DAT_08433710);
            FUN_0673e2f4(uVar11,uVar12,0);
            uVar12 = FUN_033d1ba8(&DAT_08407e20);
                    /* WARNING: Subroutine does not return */
            FUN_033d1c20(uVar11,uVar12);
          }
          goto LAB_06864878;
        }
      }
      uVar13 = (uint)uVar9;
      bVar4 = uVar14 != uVar9;
      uVar9 = uVar9 + 1;
    } while (bVar4);
  }
LAB_06864878:
  if (uVar13 < *(uint *)(unaff_x20 + 3)) {
    return unaff_x20[(long)(int)uVar13 + 4];
  }
LAB_068648ac:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


