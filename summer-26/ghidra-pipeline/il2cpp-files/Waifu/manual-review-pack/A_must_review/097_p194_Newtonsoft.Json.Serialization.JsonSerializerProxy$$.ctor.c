/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$.ctor
ENTRY_POINT: 0686008c
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy___ctor(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *in_x10;
  uint uVar8;
  uint uVar9;
  ulong unaff_x19;
  ulong uVar10;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar11;
  long *unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x25;
  long unaff_x27;
  long *unaff_x28;
  long in_stack_00000020;
  
  do {
    puVar1 = (ulong *)(in_x10 + unaff_x20 + ((ulong)param_1 >> 0x12 & 0x7fff) * 8 + 2000);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | unaff_x21 << ((ulong)param_1 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
                    /* try { // try from 068600b0 to 069600bb has its CatchHandler @ 0686015c */
      uVar10 = unaff_x19;
    } while (cVar2 != '\0');
    do {
      lVar7 = *unaff_x28;
      unaff_x19 = uVar10 + 1;
      if (lVar7 == 0) goto LAB_0685eebc;
      if ((long)(int)*(uint *)(lVar7 + 0x18) <= (long)unaff_x19) {
        uVar9 = *(uint *)(unaff_x23 + 0x18);
        if ((int)(uVar9 - 1) <= (int)unaff_x19) goto LAB_06860ba0;
        goto LAB_068602b4;
      }
      if (*(uint *)(lVar7 + 0x18) <= unaff_x19) goto LAB_0685fd5c;
      if (unaff_x22 == (long *)0x0) goto LAB_0685eebc;
      lVar7 = *(long *)(lVar7 + unaff_x19 * 8 + 0x20);
      if ((lVar7 != 0) &&
         (lVar4 = FUN_0339898c(lVar7,*(undefined8 *)(*unaff_x22 + 0x40)), lVar4 == 0))
      goto LAB_06860ed8;
      if (*(uint *)(unaff_x22 + 3) <= unaff_x19) goto LAB_0685fd5c;
      param_1 = unaff_x22 + uVar10 + 5;
      *param_1 = lVar7;
      uVar10 = unaff_x19;
    } while (DAT_08908cd0 == 0);
    in_x10 = &DAT_086f6000;
  } while( true );
  while( true ) {
    plVar5 = *(long **)(unaff_x23 + (long)(int)uVar8 * 8 + 0x20);
    if ((plVar5 == (long *)0x0) ||
       (lVar7 = (**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(*plVar5 + 0x210)),
       unaff_x22 == (long *)0x0)) goto LAB_0685eebc;
    if ((lVar7 != 0) && (lVar4 = FUN_0339898c(lVar7,*(undefined8 *)(*unaff_x22 + 0x40)), lVar4 == 0)
       ) goto LAB_06860ed8;
    if (*(uint *)(unaff_x22 + 3) <= uVar8) goto LAB_0685fd5c;
    plVar5 = unaff_x22 + (long)(int)uVar8 + 4;
    *plVar5 = lVar7;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar5 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar5 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar9 = *(uint *)(unaff_x23 + 0x18);
    unaff_x19 = (ulong)(uVar8 + 1);
    if ((int)(uVar9 - 1) <= (int)(uVar8 + 1)) break;
LAB_068602b4:
    uVar8 = (uint)unaff_x19;
    if (uVar9 <= uVar8) goto LAB_0685fd5c;
  }
LAB_06860ba0:
  if (in_stack_00000020 == 0) {
LAB_0685eebc:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (*(int *)(in_stack_00000020 + 0x18) != 0) {
    lVar7 = *(long *)(in_stack_00000020 + 0x20);
    if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar9 = (uint)unaff_x19;
    if (lVar7 == 0) {
      if (*(uint *)(unaff_x23 + 0x18) <= uVar9) goto LAB_0685fd5c;
      plVar5 = *(long **)(unaff_x23 + (long)(int)uVar9 * 8 + 0x20);
      if ((plVar5 == (long *)0x0) ||
         (lVar7 = (**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(*plVar5 + 0x210)),
         unaff_x22 == (long *)0x0)) goto LAB_0685eebc;
      if ((lVar7 != 0) &&
         (lVar4 = FUN_0339898c(lVar7,*(undefined8 *)(*unaff_x22 + 0x40)), lVar4 == 0))
      goto LAB_06860ed8;
      uVar8 = *(uint *)(unaff_x22 + 3);
    }
    else {
      if (*(int *)(in_stack_00000020 + 0x18) == 0) goto LAB_0685fd5c;
      uVar11 = *(undefined8 *)(in_stack_00000020 + 0x20);
      uVar6 = FUN_03398188(DAT_083c7838,1);
      lVar7 = FUN_06852fd0(uVar11,uVar6);
      if (unaff_x22 == (long *)0x0) goto LAB_0685eebc;
      if ((lVar7 != 0) &&
         (lVar4 = FUN_0339898c(lVar7,*(undefined8 *)(*unaff_x22 + 0x40)), lVar4 == 0)) {
LAB_06860ed8:
        uVar6 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
        FUN_033d1c20(uVar6,0);
      }
      uVar8 = *(uint *)(unaff_x22 + 3);
    }
    if (uVar9 < uVar8) {
      plVar5 = unaff_x22 + (long)(int)uVar9 + 4;
      *plVar5 = lVar7;
      if (DAT_08908cd0 == 0) {
        *unaff_x28 = (long)unaff_x22;
      }
      else {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar5 >> 0x12 & 0x7fff);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar5 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x28 >> 0x12 & 0x7fff);
        *unaff_x28 = (long)unaff_x22;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)unaff_x28 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (*(int *)(unaff_x27 + 0x18) != 0) {
        return *unaff_x25;
      }
    }
  }
LAB_0685fd5c:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


