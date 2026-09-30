/*
FUNCTION_NAME: System.Net.HttpListenerRequest$$Unquote
ENTRY_POINT: 05c154ec
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 99
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05c15804) */
/* WARNING: Removing unreachable block (ram,0x05c15968) */

void System_Net_HttpListenerRequest__Unquote(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  undefined8 uVar14;
  long unaff_x24;
  
  uVar6 = thunk_FUN_02dd2d7c();
  FUN_0536388c(*(undefined8 *)
                Method_System_Collections_Generic_Dictionary<string,_StylePropertyId>__ctor__,uVar6,
               0);
  if (unaff_x22 == 0) goto LAB_05c1595c;
  FUN_05cee21c();
  puVar1 = OVRPlugin_OVRP_1_121_0_TypeInfo;
  if ((*(long *)(unaff_x19 + 0x80) == 0) ||
     (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x80) + 0x10), lVar11 == 0)) goto LAB_05c1595c;
  uVar6 = *(undefined8 *)(lVar11 + 0x48);
  lVar11 = *(long *)OVRPlugin_OVRP_1_121_0_TypeInfo;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar11 = *(long *)puVar1;
  }
  uVar7 = FUN_055085d0(uVar6,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8),0);
  if ((uVar7 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_05c1595c;
    FUN_05cee21c(*(long *)(unaff_x19 + 0x40),*unaff_x23,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>_ContainsKey__
                 ,0);
  }
  if (*(long *)(unaff_x19 + 0x60) != 0) {
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_05c1595c;
    FUN_05cee21c(*(long *)(unaff_x19 + 0x40),*(undefined8 *)Mono_Security_PKCS7_SignerInfo_TypeInfo,
                 *(long *)(unaff_x19 + 0x60),0);
  }
  puVar5 = Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>__ctor__;
  puVar4 = Method_System_Collections_Generic_Dictionary<string,_StyleComplexSelector>_set_Item__;
  puVar3 = Method_System_Collections_Generic_Dictionary<string,_StyleComplexSelector>_TryGetValue__;
  puVar2 = PTR_DAT_069fbff8;
  puVar1 = PTR_DAT_069fbff0;
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    plVar8 = (long *)FUN_05cfb52c(*(long *)(unaff_x19 + 0x38),0);
    do {
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar12 = *plVar8;
      lVar11 = *(long *)puVar2;
      uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar11) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_05c15684;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_02dd004c(plVar8,lVar11,0);
LAB_05c15684:
      uVar7 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if ((uVar7 & 1) == 0) {
        plVar8 = (long *)thunk_FUN_02dd3048(plVar8,*(undefined8 *)puVar1);
        if (plVar8 == (long *)0x0) break;
        lVar12 = *plVar8;
        lVar11 = *(long *)puVar1;
        uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar7 == 0) goto LAB_05c157a0;
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_05c15788;
      }
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar12 = *plVar8;
      lVar11 = *(long *)puVar2;
      uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar11) {
            puVar9 = (undefined8 *)(lVar12 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_05c156ec;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_02dd004c(plVar8,lVar11,1);
LAB_05c156ec:
      plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
      if ((plVar10 != (long *)0x0) && (*plVar10 != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(plVar10);
      }
      lVar11 = *(long *)(unaff_x19 + 0x40);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar6 = FUN_05c159d0(plVar10);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_05cee21c(lVar11,*(undefined8 *)puVar5,uVar6,0);
    } while( true );
  }
  goto LAB_05c15808;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar13 = piVar13 + 4;
    if (uVar7 == 0) break;
LAB_05c15788:
    if (*(long *)(piVar13 + -2) == lVar11) {
      puVar9 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_05c157ec;
    }
  }
LAB_05c157a0:
  puVar9 = (undefined8 *)FUN_02dd004c(plVar8,lVar11,0);
LAB_05c157ec:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_05c15808:
  plVar8 = (long *)thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a18830);
  FUN_054a1e3c();
  uVar14 = *(undefined8 *)(unaff_x19 + 0x58);
  uVar6 = thunk_FUN_02dd2d7c(*(undefined8 *)(unaff_x24 + 0x48));
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x248))
              (plVar8,*(undefined8 *)
                       Method_System_Collections_Generic_Dictionary<string,_StylePropertyId>_Add__,
               uVar14,uVar6,*(undefined8 *)(unaff_x19 + 0x70),*(undefined8 *)(*plVar8 + 0x250));
    uVar6 = *(undefined8 *)(unaff_x19 + 0x40);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar6 = FUN_05c15c6c(uVar6);
    (**(code **)(*plVar8 + 0x238))(plVar8,uVar6,*(undefined8 *)(*plVar8 + 0x240));
    (**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
    if ((unaff_x21 != (long *)0x0) && (lVar11 = (**(code **)(*unaff_x21 + 0x198))(), lVar11 != 0)) {
      plVar8 = (long *)(unaff_x19 + 0x50);
      if (*plVar8 == 0) {
        if ((*(long *)(unaff_x19 + 0x80) == 0) ||
           (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x80) + 0x28), lVar11 == 0)) goto LAB_05c1595c;
        lVar11 = FUN_05d10a10(lVar11,0);
        *plVar8 = lVar11;
        LeanTween__value(plVar8,lVar11);
      }
      if (unaff_x20 != (long *)0x0) {
        (**(code **)(*unaff_x20 + 0x208))();
        *(undefined1 *)(unaff_x19 + 0x88) = 1;
        return;
      }
    }
  }
LAB_05c1595c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


