/*
FUNCTION_NAME: System.Diagnostics.TraceEventCache$$get_Timestamp
ENTRY_POINT: 0620b5f0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void System_Diagnostics_TraceEventCache__get_Timestamp(void)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  long lVar12;
  long *unaff_x21;
  long *plVar13;
  long *plVar14;
  long unaff_x22;
  undefined8 *puVar15;
  undefined8 uVar16;
  
  thunk_FUN_032e1da0(PTR_DAT_072a1920);
  thunk_FUN_032e1da0(PTR_DAT_07292b30);
  *(undefined1 *)(unaff_x22 + 0xf3c) = 1;
  puVar4 = System_Collections_Generic_IEnumerator<VisualEffectPlayableSerializedEvent>_TypeInfo;
  uVar6 = FUN_0623e494(0);
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar6;
  thunk_FUN_0333a630((undefined8 *)(unaff_x19 + 0xa8),0);
  FUN_062141ac();
  *(long **)(unaff_x19 + 0x18) = unaff_x21;
  thunk_FUN_0333a630();
  if (unaff_x21 == (long *)0x0) {
    unaff_x21 = (long *)0x0;
    *(undefined8 *)(unaff_x19 + 0x20) = 0;
  }
  else {
    lVar9 = *(long *)Nova_UIEventHandler<Gesture_OnClick,_ButtonVisuals>_TypeInfo;
    bVar2 = *(byte *)(lVar9 + 0x130);
    if (*(byte *)(*unaff_x21 + 0x130) < bVar2) {
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = unaff_x21;
      if (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar2 * 8 + -8) != lVar9) {
        plVar13 = (long *)0x0;
      }
    }
    *(long **)(unaff_x19 + 0x20) = plVar13;
    if (*(byte *)(*unaff_x21 + 0x130) < bVar2) {
      unaff_x21 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar2 * 8 + -8) != lVar9) {
      unaff_x21 = (long *)0x0;
    }
  }
  thunk_FUN_0333a630(unaff_x19 + 0x20,unaff_x21);
  uVar6 = thunk_FUN_032a55a4();
  puVar15 = (undefined8 *)(unaff_x19 + 0x28);
  *puVar15 = uVar6;
  uVar6 = thunk_FUN_032a55a4();
  thunk_FUN_0333a630(puVar15,uVar6);
  plVar13 = *(long **)(unaff_x19 + 0x20);
  if (plVar13 != (long *)0x0) {
    lVar9 = thunk_FUN_032a56a0(*(undefined8 *)
                                UnityEngine_UIElements_UxmlTypeAttributeDescription<Enum>_TypeInfo);
    FUN_059660a0(lVar9,0);
    *(long *)(lVar9 + 0x10) = unaff_x19;
    thunk_FUN_0333a630();
    (**(code **)(*plVar13 + 0x368))(plVar13,lVar9,*(undefined8 *)(*plVar13 + 0x370));
  }
  if (unaff_x20 != 0) {
    *(undefined1 *)(unaff_x19 + 0x9c) = *(undefined1 *)(unaff_x20 + 0x4c);
    *(byte *)(unaff_x19 + 0x9d) = *(byte *)(unaff_x20 + 0x44) & 1;
    *(undefined1 *)(unaff_x19 + 0x9e) = *(undefined1 *)(unaff_x20 + 0x4d);
    puVar3 = Nova_UIEventHandler<Gesture_OnCancel,_SliderVisuals>_TypeInfo;
    iVar1 = *(int *)(unaff_x20 + 0x48);
    *(int *)(unaff_x19 + 0xa0) = iVar1;
    puVar5 = UnityEngine_UIElements_Experimental_ValueAnimation<float>_TypeInfo;
    lVar9 = *(long *)puVar3;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar9 = *(long *)puVar3;
    }
    lVar12 = 0x18;
    if (iVar1 != 2) {
      lVar12 = 0x20;
    }
    *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + lVar12);
    thunk_FUN_0333a630();
    *(undefined4 *)(unaff_x19 + 0x98) = 0;
    lVar9 = FUN_032d5d3c(*(undefined8 *)puVar5,8);
    plVar13 = (long *)(unaff_x19 + 0x30);
    *plVar13 = lVar9;
    thunk_FUN_0333a630(plVar13,lVar9);
    lVar9 = *plVar13;
    if (lVar9 != 0) {
      if (*(int *)(lVar9 + 0x18) != 0) {
        uVar6 = *(undefined8 *)PTR_DAT_072a1978;
        *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)PTR_DAT_072a1920;
        thunk_FUN_0333a630();
        *(undefined8 *)(lVar9 + 0x28) = uVar6;
        thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x28),uVar6);
        uVar6 = DAT_0139e940;
        *(undefined8 *)(lVar9 + 0x30) = DAT_0139e940;
        puVar3 = PTR_DAT_072794f8;
        lVar9 = *plVar13;
        if (lVar9 == 0) goto LAB_0620ba68;
        if (1 < *(uint *)(lVar9 + 0x18)) {
          uVar16 = *(undefined8 *)System_Func<FingerFeature,_Nullable<float>>_TypeInfo;
          *(undefined8 *)(lVar9 + 0x38) = *(undefined8 *)PTR_DAT_07292b30;
          thunk_FUN_0333a630();
          *(undefined8 *)(lVar9 + 0x40) = uVar16;
          thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x40),uVar16);
          *(undefined8 *)(lVar9 + 0x48) = uVar6;
          plVar14 = (long *)*puVar15;
          if (plVar14 == (long *)0x0) {
            lVar9 = *plVar13;
            if (lVar9 == 0) goto LAB_0620ba68;
            if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_0620ba6c;
            lVar8 = **(long **)(*(long *)puVar3 + 0xb8);
            plVar13 = (long *)(lVar9 + 0x50);
            *plVar13 = lVar8;
            lVar12 = lVar8;
          }
          else {
            lVar9 = *plVar14;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            uVar6 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
                  puVar15 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                  goto LAB_0620b91c;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar15 = (undefined8 *)FUN_032937ac(plVar14,*(long *)puVar4,1);
LAB_0620b91c:
            lVar7 = (*(code *)*puVar15)(plVar14,uVar6,puVar15[1]);
            lVar9 = *plVar13;
            if (lVar9 == 0) goto LAB_0620ba68;
            if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_0620ba6c;
            lVar8 = **(long **)(*(long *)puVar3 + 0xb8);
            plVar13 = (long *)(lVar9 + 0x50);
            *plVar13 = lVar8;
            lVar12 = lVar8;
            if (lVar7 != 0) {
              lVar12 = lVar7;
            }
          }
          thunk_FUN_0333a630(plVar13,lVar8);
          *(long *)(lVar9 + 0x58) = lVar12;
          thunk_FUN_0333a630((long *)(lVar9 + 0x58),lVar12);
          puVar4 = 
          UnityEngine_UIElements_UxmlObjectListAttributeDescription<SortColumnDescription>_TypeInfo;
          *(undefined8 *)(lVar9 + 0x60) = DAT_0139f8b8;
          *(undefined4 *)(unaff_x19 + 0x38) = 2;
          lVar9 = FUN_032d5d3c(*(undefined8 *)puVar4,8);
          plVar13 = (long *)(unaff_x19 + 0x50);
          *plVar13 = lVar9;
          thunk_FUN_0333a630(plVar13,lVar9);
          lVar9 = *plVar13;
          if (lVar9 == 0) goto LAB_0620ba68;
          if (*(int *)(lVar9 + 0x18) != 0) {
            uVar6 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
            FUN_0620bae0(lVar9 + 0x20,uVar6,uVar6,uVar6,*(undefined4 *)(unaff_x19 + 0x38));
            puVar3 = UnityEngine_UIElements_UxmlObjectListAttributeDescription<Column>_TypeInfo;
            puVar4 = System_Collections_Generic_IEnumerator<RenamedNamespaceAttribute>_TypeInfo;
            lVar9 = *(long *)(unaff_x19 + 0x50);
            if (lVar9 == 0) goto LAB_0620ba68;
            if (*(int *)(lVar9 + 0x18) != 0) {
              *(undefined8 *)(lVar9 + 0x48) = 0;
              *(undefined4 *)(lVar9 + 0x40) = 0;
              thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x48),0);
              *(undefined4 *)(unaff_x19 + 0x58) = 0;
              uVar6 = FUN_032d5d3c(*(undefined8 *)puVar3,8);
              *(undefined8 *)(unaff_x19 + 0x60) = uVar6;
              thunk_FUN_0333a630();
              uVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar4);
              FUN_061f23e8(uVar6,0);
              *(undefined8 *)(unaff_x19 + 0xb0) = uVar6;
              thunk_FUN_0333a630((undefined8 *)(unaff_x19 + 0xb0),uVar6);
              return;
            }
          }
        }
      }
LAB_0620ba6c:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
  }
LAB_0620ba68:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


