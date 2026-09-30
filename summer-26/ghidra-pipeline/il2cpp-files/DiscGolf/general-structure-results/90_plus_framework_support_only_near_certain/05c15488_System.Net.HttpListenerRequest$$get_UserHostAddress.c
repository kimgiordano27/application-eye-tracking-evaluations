/*
FUNCTION_NAME: System.Net.HttpListenerRequest$$get_UserHostAddress
ENTRY_POINT: 05c15488
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 113
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_15;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05c15804) */
/* WARNING: Removing unreachable block (ram,0x05c15968) */

void System_Net_HttpListenerRequest__get_UserHostAddress(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  undefined8 *unaff_x23;
  undefined8 uVar15;
  
  if (*(char *)(unaff_x19 + 0x78) != '\0') {
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_05c1595c;
    FUN_05cee21c(*(long *)(unaff_x19 + 0x40),*(undefined8 *)OVRPlugin_OVRP_1_129_0_TypeInfo,
                 *(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
  }
  puVar1 = PTR_DAT_069fb9c0;
  if ((*(long *)(unaff_x19 + 0x80) == 0) ||
     (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x80) + 0x28), lVar12 == 0)) goto LAB_05c1595c;
  if (*(int *)(lVar12 + 100) < 100) {
    if ((unaff_x22 & 1) == 0) {
      lVar12 = *(long *)(unaff_x19 + 0x40);
      uVar7 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48));
      uVar7 = FUN_0536388c(*(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<string,_StylePropertyId>__ctor__
                           ,uVar7,0);
      if (lVar12 == 0) goto LAB_05c1595c;
      FUN_05cee21c(lVar12,*(undefined8 *)OVRPlugin_OVRP_1_43_0_TypeInfo,uVar7,0);
      puVar2 = OVRPlugin_OVRP_1_121_0_TypeInfo;
      if ((*(long *)(unaff_x19 + 0x80) == 0) ||
         (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x80) + 0x10), lVar12 == 0)) goto LAB_05c1595c;
      uVar7 = *(undefined8 *)(lVar12 + 0x48);
      lVar12 = *(long *)OVRPlugin_OVRP_1_121_0_TypeInfo;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar12 = *(long *)puVar2;
      }
      uVar8 = FUN_055085d0(uVar7,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8),0);
      if ((uVar8 & 1) != 0) {
        lVar12 = *(long *)(unaff_x19 + 0x40);
        puVar10 = (undefined8 *)
                  Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>_ContainsKey__
        ;
        goto joined_r0x05c155a4;
      }
    }
  }
  else {
    *(undefined1 *)(unaff_x19 + 0x98) = 1;
    if ((unaff_x22 & 1) == 0) {
      lVar12 = *(long *)(unaff_x19 + 0x40);
      puVar10 = (undefined8 *)PTR_DAT_06a132d8;
joined_r0x05c155a4:
      if (lVar12 == 0) goto LAB_05c1595c;
      FUN_05cee21c(lVar12,*unaff_x23,*puVar10,0);
    }
  }
  if (*(long *)(unaff_x19 + 0x60) != 0) {
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_05c1595c;
    FUN_05cee21c(*(long *)(unaff_x19 + 0x40),*(undefined8 *)Mono_Security_PKCS7_SignerInfo_TypeInfo,
                 *(long *)(unaff_x19 + 0x60),0);
  }
  puVar6 = Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>__ctor__;
  puVar5 = Method_System_Collections_Generic_Dictionary<string,_StyleComplexSelector>_set_Item__;
  puVar4 = Method_System_Collections_Generic_Dictionary<string,_StyleComplexSelector>_TryGetValue__;
  puVar3 = PTR_DAT_069fbff8;
  puVar2 = PTR_DAT_069fbff0;
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    plVar9 = (long *)FUN_05cfb52c(*(long *)(unaff_x19 + 0x38),0);
    do {
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar13 = *plVar9;
      lVar12 = *(long *)puVar3;
      uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar8 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar12) {
            puVar10 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_05c15684;
          }
          uVar8 = uVar8 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)FUN_02dd004c(plVar9,lVar12,0);
LAB_05c15684:
      uVar8 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if ((uVar8 & 1) == 0) {
        plVar9 = (long *)thunk_FUN_02dd3048(plVar9,*(undefined8 *)puVar2);
        if (plVar9 == (long *)0x0) break;
        lVar13 = *plVar9;
        lVar12 = *(long *)puVar2;
        uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar8 == 0) goto LAB_05c157a0;
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_05c15788;
      }
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar13 = *plVar9;
      lVar12 = *(long *)puVar3;
      uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar8 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar12) {
            puVar10 = (undefined8 *)(lVar13 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_05c156ec;
          }
          uVar8 = uVar8 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)FUN_02dd004c(plVar9,lVar12,1);
LAB_05c156ec:
      plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
      if ((plVar11 != (long *)0x0) && (*plVar11 != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(plVar11);
      }
      lVar12 = *(long *)(unaff_x19 + 0x40);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar7 = FUN_05c159d0(plVar11);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_05cee21c(lVar12,*(undefined8 *)puVar6,uVar7,0);
    } while( true );
  }
  goto LAB_05c15808;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar14 = piVar14 + 4;
    if (uVar8 == 0) break;
LAB_05c15788:
    if (*(long *)(piVar14 + -2) == lVar12) {
      puVar10 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_05c157ec;
    }
  }
LAB_05c157a0:
  puVar10 = (undefined8 *)FUN_02dd004c(plVar9,lVar12,0);
LAB_05c157ec:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_05c15808:
  plVar9 = (long *)thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a18830);
  FUN_054a1e3c();
  uVar15 = *(undefined8 *)(unaff_x19 + 0x58);
  uVar7 = thunk_FUN_02dd2d7c(*(undefined8 *)(puVar1 + 0x48));
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x248))
              (plVar9,*(undefined8 *)
                       Method_System_Collections_Generic_Dictionary<string,_StylePropertyId>_Add__,
               uVar15,uVar7,*(undefined8 *)(unaff_x19 + 0x70),*(undefined8 *)(*plVar9 + 0x250));
    uVar7 = *(undefined8 *)(unaff_x19 + 0x40);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar7 = FUN_05c15c6c(uVar7);
    (**(code **)(*plVar9 + 0x238))(plVar9,uVar7,*(undefined8 *)(*plVar9 + 0x240));
    (**(code **)(*plVar9 + 0x1d8))(plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
    if ((unaff_x21 != (long *)0x0) && (lVar12 = (**(code **)(*unaff_x21 + 0x198))(), lVar12 != 0)) {
      plVar9 = (long *)(unaff_x19 + 0x50);
      if (*plVar9 == 0) {
        if ((*(long *)(unaff_x19 + 0x80) == 0) ||
           (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x80) + 0x28), lVar12 == 0)) goto LAB_05c1595c;
        lVar12 = FUN_05d10a10(lVar12,0);
        *plVar9 = lVar12;
        LeanTween__value(plVar9,lVar12);
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


