/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetInternalSerializer
ENTRY_POINT: 0685ffd8
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetInternalSerializer(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x25;
  long unaff_x27;
  long *unaff_x28;
  long in_stack_00000020;
  
  if (in_stack_00000020 == 0) goto LAB_0685eebc;
  if (*(int *)(in_stack_00000020 + 0x18) == 0) goto LAB_0685fd5c;
                    /* try { // try from 0685ffec to 06960003 has its CatchHandler @ 068601d8 */
  lVar9 = *(long *)(in_stack_00000020 + 0x20);
  if (*(int *)(*(long *)(unaff_x22 + 0x3b8) + 0xe0) == 0) {
    FUN_033b9870();
  }
  if (lVar9 != 0) {
    plVar5 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(unaff_x23 + 0x18));
    uVar4 = *(int *)(unaff_x23 + 0x18) - 1;
    FUN_068537e0(*unaff_x28,0,plVar5,0,uVar4,0);
    if (*(int *)(in_stack_00000020 + 0x18) == 0) goto LAB_0685fd5c;
    uVar10 = *(undefined8 *)(in_stack_00000020 + 0x20);
    lVar9 = FUN_03398188(DAT_083c7838,1);
    if (lVar9 == 0) {
LAB_0685eebc:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if (*(int *)(lVar9 + 0x18) == 0) goto LAB_0685fd5c;
    *(undefined4 *)(lVar9 + 0x20) = 1;
    lVar9 = FUN_06852fd0(uVar10);
    if (plVar5 == (long *)0x0) goto LAB_0685eebc;
    if ((lVar9 != 0) && (lVar6 = FUN_0339898c(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
      uVar10 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar10,0);
    }
    uVar8 = *(uint *)(plVar5 + 3);
    if (uVar8 <= uVar4) goto LAB_0685fd5c;
    plVar7 = plVar5 + (long)(int)uVar4 + 4;
    *plVar7 = lVar9;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar7 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar8 = *(uint *)(plVar5 + 3);
    }
    if (uVar8 <= uVar4) goto LAB_0685fd5c;
    lVar9 = *unaff_x28;
    if (lVar9 == 0) goto LAB_0685eebc;
    if (*(uint *)(lVar9 + 0x18) <= uVar4) goto LAB_0685fd5c;
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) goto LAB_0685eebc;
    if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8) !=
        DAT_083c8a28)) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1fec();
    }
    FUN_06853274(plVar7,*(undefined8 *)(lVar9 + (long)(int)uVar4 * 8 + 0x20),0,0);
    *unaff_x28 = (long)plVar5;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x28 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)unaff_x28 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  if (*(int *)(unaff_x27 + 0x18) != 0) {
    return *unaff_x25;
  }
LAB_0685fd5c:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


