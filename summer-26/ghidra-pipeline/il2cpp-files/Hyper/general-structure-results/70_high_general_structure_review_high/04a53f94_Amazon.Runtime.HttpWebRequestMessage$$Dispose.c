/*
FUNCTION_NAME: Amazon.Runtime.HttpWebRequestMessage$$Dispose
ENTRY_POINT: 04a53f94
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined8 * Amazon_Runtime_HttpWebRequestMessage__Dispose(void)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 uVar6;
  long unaff_x19;
  long unaff_x20;
  void *pvVar7;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  uint unaff_w26;
  long in_stack_00000000;
  
  puVar2 = malloc(0x1000);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = unaff_x24;
    puVar2[1] = 0;
    *(undefined8 **)(unaff_x20 + 0x1330) = puVar2;
    puVar2[1] = 0x20;
    puVar3 = puVar2 + 2;
    *puVar3 = &PTR_FUN_0ac08640;
    puVar2[4] = unaff_x22;
    puVar2[5] = unaff_x23;
    *(undefined1 *)(puVar2 + 3) = 0x35;
    *(ushort *)((long)puVar2 + 0x19) = *(ushort *)((long)puVar2 + 0x19) & 0xf000 | 0x540;
    if ((puVar3 == (undefined8 *)0x0) || (in_stack_00000000 == 0)) {
      if (puVar3 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
    }
    else {
      pvVar7 = *(void **)(unaff_x20 + 0x1330);
      lVar4 = *(long *)((long)pvVar7 + 8);
      puVar2 = pvVar7;
      if (lVar4 - 0xfd0U < 0xfffffffffffff010) {
        puVar2 = malloc(0x1000);
        if (puVar2 == (void *)0x0) goto LAB_04a541d4;
        lVar4 = 0;
        *puVar2 = pvVar7;
        puVar2[1] = 0;
        *(undefined8 **)(unaff_x20 + 0x1330) = puVar2;
      }
      *(long *)((long)puVar2 + 8) = lVar4 + 0x20;
      *(undefined ***)((long)puVar2 + lVar4 + 0x10) = &PTR_FUN_0ac08720;
      *(long *)((long)puVar2 + lVar4 + 0x20) = in_stack_00000000;
      *(undefined8 **)((long)puVar2 + lVar4 + 0x28) = puVar3;
      *(undefined1 *)((long)puVar2 + lVar4 + 0x18) = 0x1c;
      *(ushort *)((long)puVar2 + lVar4 + 0x19) =
           *(ushort *)((long)puVar2 + lVar4 + 0x19) & 0xf000 | 0x540;
    }
    puVar2 = (undefined8 *)FUN_04a60828();
    if (puVar2 == (undefined8 *)0x0) {
      unaff_w26 = 1;
    }
    if ((unaff_w26 & 1) == 0) {
      pvVar7 = *(void **)(unaff_x20 + 0x1330);
      lVar4 = *(long *)((long)pvVar7 + 8);
      puVar3 = pvVar7;
      if (lVar4 - 0xfd0U < 0xfffffffffffff010) {
        puVar3 = malloc(0x1000);
        if (puVar3 == (void *)0x0) goto LAB_04a541d4;
        lVar4 = 0;
        *puVar3 = pvVar7;
        puVar3[1] = 0;
        *(undefined8 **)(unaff_x20 + 0x1330) = puVar3;
      }
      *(long *)((long)puVar3 + 8) = lVar4 + 0x20;
      puVar5 = (undefined8 *)((long)puVar3 + lVar4 + 0x10);
      *puVar5 = &PTR_FUN_0ac08790;
      uVar1 = *(ushort *)((long)puVar3 + lVar4 + 0x19);
      uVar6 = 0x19;
    }
    else {
      if (unaff_x19 == 0) {
        return puVar2;
      }
      if (puVar2 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      pvVar7 = *(void **)(unaff_x20 + 0x1330);
      lVar4 = *(long *)((long)pvVar7 + 8);
      puVar3 = pvVar7;
      if (lVar4 - 0xfd0U < 0xfffffffffffff010) {
        puVar3 = malloc(0x1000);
        if (puVar3 == (void *)0x0) goto LAB_04a541d4;
        lVar4 = 0;
        *puVar3 = pvVar7;
        puVar3[1] = 0;
        *(undefined8 **)(unaff_x20 + 0x1330) = puVar3;
      }
      *(long *)((long)puVar3 + 8) = lVar4 + 0x20;
      puVar5 = (undefined8 *)((long)puVar3 + lVar4 + 0x10);
      *puVar5 = &PTR_FUN_0ac08800;
      uVar1 = *(ushort *)((long)puVar3 + lVar4 + 0x19);
      uVar6 = 0x18;
    }
    puVar5[2] = unaff_x19;
    puVar5[3] = puVar2;
    *(undefined1 *)(puVar5 + 1) = uVar6;
    *(ushort *)((long)puVar5 + 9) = uVar1 & 0xf000 | 0x540;
    return puVar5;
  }
LAB_04a541d4:
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


