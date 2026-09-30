/*
FUNCTION_NAME: Unity.VisualScripting.OnMouseUpAsButton$$get_MessageListenerType
ENTRY_POINT: 068a4498
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_8
*/


void Unity_VisualScripting_OnMouseUpAsButton__get_MessageListenerType(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x19;
  long *plVar9;
  long unaff_x20;
  undefined8 *puVar10;
  long lVar11;
  long unaff_x21;
  undefined8 *puVar12;
  long unaff_x22;
  long unaff_x23;
  undefined8 *puVar13;
  
  puVar6 = Method_System_Collections_Generic_List<AsyncGPUReadbackRequest>_get_Item__;
  puVar5 = Method_System_Collections_Generic_List<AsyncGPUReadbackRequest>_Add__;
  puVar4 = Method_System_Collections_Generic_List<AsyncGPUReadbackRequest>__ctor__;
  puVar3 = Method_System_Collections_Generic_List<AstNode>_set_Item__;
  puVar2 = Method_System_Collections_Generic_List<AstNode>_get_Item__;
  puVar1 = Method_System_Collections_Generic_List<AstNode>_get_Count__;
  puVar13 = *(undefined8 **)(unaff_x23 + 0x218);
  puVar10 = *(undefined8 **)(unaff_x20 + 0x220);
  plVar9 = *(long **)(unaff_x19 + 200);
  puVar12 = *(undefined8 **)(unaff_x21 + 0x228);
  if ((*(byte *)(unaff_x22 + 0x1d4) & 1) == 0) {
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<AsyncGPUReadbackRequest>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<AstNode>_get_Item__);
    thunk_FUN_032e1da0(PTR_DAT_072800c8);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<AstNode>_set_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<AstNode>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<AstNode>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<AsyncGPUReadbackRequest>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<AsyncGPUReadbackRequest>_set_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<Attribute>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<Attribute>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<Attribute>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<AstNode>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<AstNode>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<AsyncGPUReadbackRequest>_Add__);
    *(undefined1 *)(unaff_x22 + 0x1d4) = 1;
  }
  uVar7 = thunk_FUN_032a56a0(*puVar13);
  FUN_050db448(uVar7,*puVar10);
  **(undefined8 **)(*plVar9 + 0xb8) = uVar7;
  thunk_FUN_0333a630(*(undefined8 *)(*plVar9 + 0xb8),uVar7);
  uVar7 = thunk_FUN_032a56a0(*puVar12);
  FUN_03d0a380(uVar7,*(undefined8 *)puVar1);
  puVar10 = (undefined8 *)(*(long *)(*plVar9 + 0xb8) + 8);
  *puVar10 = uVar7;
  thunk_FUN_0333a630(puVar10,uVar7);
  uVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
  FUN_068a19e0();
  puVar10 = (undefined8 *)(*(long *)(*plVar9 + 0xb8) + 0x10);
  *puVar10 = uVar7;
  thunk_FUN_0333a630(puVar10,uVar7);
  uVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
  FUN_068a1d88();
  puVar10 = (undefined8 *)(*(long *)(*plVar9 + 0xb8) + 0x18);
  *puVar10 = uVar7;
  thunk_FUN_0333a630(puVar10,uVar7);
  uVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar4);
  FUN_068a2544();
  puVar10 = (undefined8 *)(*(long *)(*plVar9 + 0xb8) + 0x20);
  *puVar10 = uVar7;
  thunk_FUN_0333a630(puVar10,uVar7);
  uVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar5);
  FUN_068a350c();
  puVar10 = (undefined8 *)(*(long *)(*plVar9 + 0xb8) + 0x28);
  *puVar10 = uVar7;
  thunk_FUN_0333a630(puVar10,uVar7);
  uVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar6);
  FUN_068a17bc();
  puVar10 = (undefined8 *)(*(long *)(*plVar9 + 0xb8) + 0x30);
  *puVar10 = uVar7;
  thunk_FUN_0333a630(puVar10,uVar7);
  uVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                              Method_System_Collections_Generic_List<Attribute>__ctor__);
  FUN_068a2bec();
  puVar10 = (undefined8 *)(*(long *)(*plVar9 + 0xb8) + 0x38);
  *puVar10 = uVar7;
  thunk_FUN_0333a630(puVar10,uVar7);
  uVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                              Method_System_Collections_Generic_List<Attribute>__ctor__);
  Unity_VisualScripting_OnPointerUp__get_hookName();
  puVar10 = (undefined8 *)(*(long *)(*plVar9 + 0xb8) + 0x40);
  *puVar10 = uVar7;
  thunk_FUN_0333a630(puVar10,uVar7);
  uVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                              Method_System_Collections_Generic_List<AsyncGPUReadbackRequest>_set_Item__
                            );
  FUN_068a28a0();
  puVar10 = (undefined8 *)(*(long *)(*plVar9 + 0xb8) + 0x48);
  *puVar10 = uVar7;
  thunk_FUN_0333a630(puVar10,uVar7);
  if (DAT_076e13a8 == '\0') {
    thunk_FUN_032e1da0(PTR_DAT_072800c8);
    DAT_076e13a8 = '\x01';
  }
  lVar8 = *plVar9;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar8 = *plVar9;
  }
  lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
  if (DAT_076e13a9 == '\0') {
    thunk_FUN_032e1da0(plVar9);
    lVar8 = *plVar9;
    DAT_076e13a9 = '\x01';
  }
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar8 = *plVar9;
  }
  puVar1 = Method_System_Collections_Generic_List<Attribute>_Add__;
  if (lVar11 != 0) {
    FUN_03d0b564(lVar11,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10),
                 *(undefined8 *)Method_System_Collections_Generic_List<Attribute>_Add__);
    if (DAT_076e13a8 == '\0') {
      thunk_FUN_032e1da0(PTR_DAT_072800c8);
      DAT_076e13a8 = '\x01';
    }
    lVar8 = *plVar9;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar8 = *plVar9;
    }
    lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
    if (DAT_076e13aa == '\0') {
      thunk_FUN_032e1da0(plVar9);
      lVar8 = *plVar9;
      DAT_076e13aa = '\x01';
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar8 = *plVar9;
    }
    if (lVar11 != 0) {
      FUN_03d0b564(lVar11,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x18),*(undefined8 *)puVar1);
      if (DAT_076e13a8 == '\0') {
        thunk_FUN_032e1da0(PTR_DAT_072800c8);
        DAT_076e13a8 = '\x01';
      }
      lVar8 = *plVar9;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar8 = *plVar9;
      }
      lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
      if (DAT_076e13ab == '\0') {
        thunk_FUN_032e1da0(plVar9);
        lVar8 = *plVar9;
        DAT_076e13ab = '\x01';
      }
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar8 = *plVar9;
      }
      if (lVar11 != 0) {
        FUN_03d0b564(lVar11,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x20),*(undefined8 *)puVar1);
        if (DAT_076e13a8 == '\0') {
          thunk_FUN_032e1da0(PTR_DAT_072800c8);
          DAT_076e13a8 = '\x01';
        }
        lVar8 = *plVar9;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar8 = *plVar9;
        }
        lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
        if (DAT_076e13ac == '\0') {
          thunk_FUN_032e1da0(plVar9);
          lVar8 = *plVar9;
          DAT_076e13ac = '\x01';
        }
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar8 = *plVar9;
        }
        if (lVar11 != 0) {
          FUN_03d0b564(lVar11,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x28),*(undefined8 *)puVar1)
          ;
          if (DAT_076e13a8 == '\0') {
            thunk_FUN_032e1da0(PTR_DAT_072800c8);
            DAT_076e13a8 = '\x01';
          }
          lVar8 = *plVar9;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
            lVar8 = *plVar9;
          }
          lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
          if (DAT_076e13ad == '\0') {
            thunk_FUN_032e1da0(plVar9);
            lVar8 = *plVar9;
            DAT_076e13ad = '\x01';
          }
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
            lVar8 = *plVar9;
          }
          if (lVar11 != 0) {
            FUN_03d0b564(lVar11,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x30),
                         *(undefined8 *)puVar1);
            if (DAT_076e13a8 == '\0') {
              thunk_FUN_032e1da0(PTR_DAT_072800c8);
              DAT_076e13a8 = '\x01';
            }
            lVar8 = *plVar9;
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar8 = *plVar9;
            }
            lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
            if (DAT_076e13ae == '\0') {
              thunk_FUN_032e1da0(plVar9);
              lVar8 = *plVar9;
              DAT_076e13ae = '\x01';
            }
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar8 = *plVar9;
            }
            if (lVar11 != 0) {
              FUN_03d0b564(lVar11,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x38),
                           *(undefined8 *)puVar1);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


