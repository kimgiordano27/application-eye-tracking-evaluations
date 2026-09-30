/*
FUNCTION_NAME: UnityWebSocketSharp.PayloadData$$get_Code
ENTRY_POINT: 05c157bc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 133
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_17;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05c15804) */
/* WARNING: Removing unreachable block (ram,0x05c15968) */

void UnityWebSocketSharp_PayloadData__get_Code(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool in_ZR;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  undefined8 uVar16;
  
  if (!in_ZR) {
    if ((*(long *)(unaff_x19 + 0x80) == 0) ||
       (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x80) + 0x10), lVar13 == 0)) goto LAB_05c1595c;
    uVar7 = FUN_05d12a28(lVar13,0);
    unaff_w22 = uVar7 ^ 1;
  }
  puVar2 = OVRPlugin_OVRP_1_119_0_TypeInfo;
  if (*(char *)(unaff_x19 + 0x48) != '\x01' || (unaff_w22 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_05c1595c;
    FUN_05cee21c(*(long *)(unaff_x19 + 0x40),*(undefined8 *)OVRPlugin_OVRP_1_119_0_TypeInfo,
                 *(undefined8 *)PTR_DAT_06a132d8,0);
    unaff_w22 = 1;
  }
  if (*(char *)(unaff_x19 + 0x78) != '\0') {
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_05c1595c;
    FUN_05cee21c(*(long *)(unaff_x19 + 0x40),*(undefined8 *)OVRPlugin_OVRP_1_129_0_TypeInfo,
                 *(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
  }
  puVar1 = PTR_DAT_069fb9c0;
  if ((*(long *)(unaff_x19 + 0x80) == 0) ||
     (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x80) + 0x28), lVar13 == 0)) goto LAB_05c1595c;
  if (*(int *)(lVar13 + 100) < 100) {
    if ((unaff_w22 & 1) == 0) {
      lVar13 = *(long *)(unaff_x19 + 0x40);
      uVar8 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48));
      uVar8 = FUN_0536388c(*(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<string,_StylePropertyId>__ctor__
                           ,uVar8,0);
      if (lVar13 == 0) goto LAB_05c1595c;
      FUN_05cee21c(lVar13,*(undefined8 *)OVRPlugin_OVRP_1_43_0_TypeInfo,uVar8,0);
      puVar3 = OVRPlugin_OVRP_1_121_0_TypeInfo;
      if ((*(long *)(unaff_x19 + 0x80) == 0) ||
         (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x80) + 0x10), lVar13 == 0)) goto LAB_05c1595c;
      uVar8 = *(undefined8 *)(lVar13 + 0x48);
      lVar13 = *(long *)OVRPlugin_OVRP_1_121_0_TypeInfo;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar13 = *(long *)puVar3;
      }
      uVar9 = FUN_055085d0(uVar8,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8),0);
      if ((uVar9 & 1) != 0) {
        lVar13 = *(long *)(unaff_x19 + 0x40);
        puVar11 = (undefined8 *)
                  Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>_ContainsKey__
        ;
        goto joined_r0x05c155a4;
      }
    }
  }
  else {
    *(undefined1 *)(unaff_x19 + 0x98) = 1;
    if ((unaff_w22 & 1) == 0) {
      lVar13 = *(long *)(unaff_x19 + 0x40);
      puVar11 = (undefined8 *)PTR_DAT_06a132d8;
joined_r0x05c155a4:
      if (lVar13 == 0) goto LAB_05c1595c;
      FUN_05cee21c(lVar13,*(undefined8 *)puVar2,*puVar11,0);
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
    plVar10 = (long *)FUN_05cfb52c(*(long *)(unaff_x19 + 0x38),0);
    do {
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar14 = *plVar10;
      lVar13 = *(long *)puVar3;
      uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar9 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar13) {
            puVar11 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_05c15684;
          }
          uVar9 = uVar9 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar9 != 0);
      }
      puVar11 = (undefined8 *)FUN_02dd004c(plVar10,lVar13,0);
LAB_05c15684:
      uVar9 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      if ((uVar9 & 1) == 0) {
        plVar10 = (long *)thunk_FUN_02dd3048(plVar10,*(undefined8 *)puVar2);
        if (plVar10 == (long *)0x0) break;
        lVar14 = *plVar10;
        lVar13 = *(long *)puVar2;
        uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar9 == 0) goto LAB_05c157a0;
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        goto LAB_05c15788;
      }
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar14 = *plVar10;
      lVar13 = *(long *)puVar3;
      uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar9 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar13) {
            puVar11 = (undefined8 *)(lVar14 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_05c156ec;
          }
          uVar9 = uVar9 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar9 != 0);
      }
      puVar11 = (undefined8 *)FUN_02dd004c(plVar10,lVar13,1);
LAB_05c156ec:
      plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
      if ((plVar12 != (long *)0x0) && (*plVar12 != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(plVar12);
      }
      lVar13 = *(long *)(unaff_x19 + 0x40);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar8 = FUN_05c159d0(plVar12);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_05cee21c(lVar13,*(undefined8 *)puVar6,uVar8,0);
    } while( true );
  }
  goto LAB_05c15808;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar15 = piVar15 + 4;
    if (uVar9 == 0) break;
LAB_05c15788:
    if (*(long *)(piVar15 + -2) == lVar13) {
      puVar11 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_05c157ec;
    }
  }
LAB_05c157a0:
  puVar11 = (undefined8 *)FUN_02dd004c(plVar10,lVar13,0);
LAB_05c157ec:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_05c15808:
  plVar10 = (long *)thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a18830);
  FUN_054a1e3c();
  uVar16 = *(undefined8 *)(unaff_x19 + 0x58);
  uVar8 = thunk_FUN_02dd2d7c(*(undefined8 *)(puVar1 + 0x48));
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x248))
              (plVar10,*(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<string,_StylePropertyId>_Add__,
               uVar16,uVar8,*(undefined8 *)(unaff_x19 + 0x70),*(undefined8 *)(*plVar10 + 0x250));
    uVar8 = *(undefined8 *)(unaff_x19 + 0x40);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar8 = FUN_05c15c6c(uVar8);
    (**(code **)(*plVar10 + 0x238))(plVar10,uVar8,*(undefined8 *)(*plVar10 + 0x240));
    (**(code **)(*plVar10 + 0x1d8))(plVar10,*(undefined8 *)(*plVar10 + 0x1e0));
    if ((unaff_x21 != (long *)0x0) && (lVar13 = (**(code **)(*unaff_x21 + 0x198))(), lVar13 != 0)) {
      plVar10 = (long *)(unaff_x19 + 0x50);
      if (*plVar10 == 0) {
        if ((*(long *)(unaff_x19 + 0x80) == 0) ||
           (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x80) + 0x28), lVar13 == 0)) goto LAB_05c1595c;
        lVar13 = FUN_05d10a10(lVar13,0);
        *plVar10 = lVar13;
        LeanTween__value(plVar10,lVar13);
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


