/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateNewObject
ENTRY_POINT: 06858260
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewObject(void)

{
  uint uVar1;
  ulong *puVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *unaff_x19;
  int unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  iVar3 = unaff_w24;
  if (unaff_w24 < 0) {
    iVar3 = unaff_w24 + 1;
  }
  if ((int)unaff_w21 <= iVar3 >> 1) {
    do {
      uVar4 = unaff_w21 * 2;
      if ((int)uVar4 < unaff_w24) {
        lVar12 = *unaff_x19;
        if (lVar12 == 0) goto LAB_06858610;
        uVar7 = uVar4 + in_stack_00000008._4_4_;
        if ((*(uint *)(lVar12 + 0x18) <= uVar7 - 1) || (*(uint *)(lVar12 + 0x18) <= uVar7))
        goto LAB_0685860c;
        plVar15 = (long *)unaff_x19[2];
        if (plVar15 == (long *)0x0) goto LAB_06858610;
        lVar11 = *plVar15;
                    /* try { // try from 068582bc to 06958373 has its CatchHandler @ 068582bc
                       catch() { ... } // from try @ 068582bc with catch @ 068582bc
                       catch() { ... } // from try @ 068583c8 with catch @ 068582bc
                       catch() { ... } // from try @ 0685841c with catch @ 068582bc
                       catch() { ... } // from try @ 06858484 with catch @ 068582bc */
        uVar16 = *(undefined8 *)(lVar12 + (long)(int)(uVar7 - 1) * 8 + 0x20);
        uVar17 = *(undefined8 *)(lVar12 + (long)(int)uVar7 * 8 + 0x20);
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == DAT_083cc5d0) {
              puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_06858314;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_0338f71c(plVar15,DAT_083cc5d0,0);
LAB_06858314:
        uVar7 = (*(code *)*puVar9)(plVar15,uVar16,uVar17,puVar9[1]);
        uVar4 = uVar4 | uVar7 >> 0x1f;
      }
      if (*unaff_x19 == 0) goto LAB_06858610;
      uVar7 = uVar4 + unaff_w20;
      if (*(uint *)(*unaff_x19 + 0x18) <= uVar7) goto LAB_0685860c;
      plVar15 = (long *)unaff_x19[2];
      if (plVar15 == (long *)0x0) goto LAB_06858610;
      lVar12 = *plVar15;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
                    /* try { // try from 06858374 to 0695838f has its CatchHandler @ 068583e8 */
          if (*(long *)(piVar14 + -2) == DAT_083cc5d0) {
                    /* try { // try from 0685839c to 069583c7 has its CatchHandler @ 068583e4 */
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_068583a8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_0338f71c(plVar15,DAT_083cc5d0,0);
LAB_068583a8:
      iVar8 = (*(code *)*puVar9)(plVar15);
      if (-1 < iVar8) break;
      plVar15 = (long *)*unaff_x19;
      if (plVar15 == (long *)0x0) goto LAB_06858610;
                    /* try { // try from 068583c8 to 069583ff has its CatchHandler @ 068582bc */
      uVar10 = *(uint *)(plVar15 + 3);
      if (uVar10 <= uVar7) goto LAB_0685860c;
      lVar12 = plVar15[(long)(int)uVar7 + 4];
      if (lVar12 != 0) {
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 0685839c with catch @ 068583e4
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06858374 with catch @ 068583e8
                        */
        lVar11 = FUN_0339898c(lVar12,*(undefined8 *)(*plVar15 + 0x40));
        if (lVar11 == 0) goto LAB_06858614;
        uVar10 = *(uint *)(plVar15 + 3);
      }
      uVar1 = unaff_w21 + unaff_w20;
                    /* try { // try from 06858400 to 0695841b has its CatchHandler @ 0685847c */
      if (uVar10 <= uVar1) goto LAB_0685860c;
      plVar15 = plVar15 + (long)(int)uVar1 + 4;
      *plVar15 = lVar12;
      if (DAT_08908cd0 != 0) {
                    /* try { // try from 0685841c to 0695846b has its CatchHandler @ 068582bc */
        puVar2 = &DAT_0873ccb0 + ((ulong)plVar15 >> 0x12 & 0x7fff);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = *puVar2 | 1L << ((ulong)plVar15 >> 0xc & 0x3f);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar15 = (long *)unaff_x19[1];
      if (plVar15 != (long *)0x0) {
        uVar10 = *(uint *)(plVar15 + 3);
        if (uVar10 <= uVar7) goto LAB_0685860c;
                    /* try { // try from 0685846c to 0695847b has its CatchHandler @ 0685847c */
        lVar12 = plVar15[(long)(int)uVar7 + 4];
        if (lVar12 != 0) {
                    /* catch() { ... } // from try @ 06858400 with catch @ 0685847c
                       catch() { ... } // from try @ 0685846c with catch @ 0685847c */
                    /* try { // try from 06858480 to 06958483 has its CatchHandler @ 0685848c */
          lVar11 = FUN_0339898c(lVar12,*(undefined8 *)(*plVar15 + 0x40));
                    /* try { // try from 06858484 to 0695848f has its CatchHandler @ 068582bc */
          if (lVar11 == 0) goto LAB_06858614;
          uVar10 = *(uint *)(plVar15 + 3);
        }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06858480 with catch @ 0685848c
                        */
        if (uVar10 <= uVar1) goto LAB_0685860c;
        plVar15 = plVar15 + (long)(int)uVar1 + 4;
        *plVar15 = lVar12;
        if (DAT_08908cd0 != 0) {
          puVar2 = &DAT_0873ccb0 + ((ulong)plVar15 >> 0x12 & 0x7fff);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = *puVar2 | 1L << ((ulong)plVar15 >> 0xc & 0x3f);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
      }
      unaff_w21 = uVar4;
    } while ((int)uVar4 <= iVar3 >> 1);
    unaff_x23 = *unaff_x19;
    if (unaff_x23 == 0) {
LAB_06858610:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
  }
  if ((unaff_x22 != 0) && (lVar12 = FUN_0339898c(), lVar12 == 0)) {
LAB_06858614:
    uVar16 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
    FUN_033d1c20(uVar16,0);
  }
  uVar4 = unaff_w21 + unaff_w20;
  if (*(uint *)(unaff_x23 + 0x18) <= uVar4) {
LAB_0685860c:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d44();
  }
  plVar15 = (long *)(unaff_x23 + (long)(int)uVar4 * 8 + 0x20);
  *plVar15 = unaff_x22;
  if (DAT_08908cd0 != 0) {
    puVar2 = &DAT_0873ccb0 + ((ulong)plVar15 >> 0x12 & 0x7fff);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar6) {
        *puVar2 = *puVar2 | 1L << ((ulong)plVar15 >> 0xc & 0x3f);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar15 = (long *)unaff_x19[1];
  if (plVar15 != (long *)0x0) {
    if ((in_stack_00000000 != 0) &&
       (lVar12 = FUN_0339898c(in_stack_00000000,*(undefined8 *)(*plVar15 + 0x40)), lVar12 == 0))
    goto LAB_06858614;
    if (*(uint *)(plVar15 + 3) <= uVar4) goto LAB_0685860c;
    plVar15 = plVar15 + (long)(int)uVar4 + 4;
    *plVar15 = in_stack_00000000;
    if (DAT_08908cd0 != 0) {
      puVar2 = &DAT_0873ccb0 + ((ulong)plVar15 >> 0x12 & 0x7fff);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 | 1L << ((ulong)plVar15 >> 0xc & 0x3f);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  return;
}


