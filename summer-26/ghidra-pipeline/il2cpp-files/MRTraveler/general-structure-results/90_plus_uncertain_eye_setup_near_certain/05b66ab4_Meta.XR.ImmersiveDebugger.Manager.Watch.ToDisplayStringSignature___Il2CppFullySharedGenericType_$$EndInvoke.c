/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<__Il2CppFullySharedGenericType>$$EndInvoke
ENTRY_POINT: 05b66ab4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<__Il2CppFullySharedGenericType>__EndInvoke
          (long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  undefined8 *puVar10;
  long *plVar11;
  long unaff_x23;
  long *plVar12;
  long unaff_x24;
  long unaff_x25;
  long *plVar13;
  long unaff_x26;
  long *plVar14;
  
  FUN_03c8f898(*(undefined8 *)(param_1 + 0x2e8));
  FUN_03c8f898(PTR_DAT_08e69590);
  FUN_03c8f898(PTR_DAT_08e85b08);
  *(undefined1 *)(unaff_x20 + 0x433) = 1;
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03cf1244();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x68) + 0x135) & 1) == 0) {
    FUN_03cf1244();
  }
  lVar2 = thunk_FUN_03cf5234();
  lVar7 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03cf1244(lVar7);
  }
  FUN_054bfd48(lVar2,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x70));
  if (lVar2 == 0) goto LAB_05b66efc;
  plVar11 = (long *)(lVar2 + 0x10);
  *plVar11 = unaff_x26;
  thunk_FUN_03d233cc(plVar11);
  plVar14 = (long *)(lVar2 + 0x18);
  *plVar14 = unaff_x25;
  thunk_FUN_03d233cc(plVar14);
  plVar13 = (long *)(lVar2 + 0x20);
  *plVar13 = unaff_x23;
  thunk_FUN_03d233cc(plVar13);
  plVar12 = (long *)(lVar2 + 0x38);
  *plVar12 = unaff_x24;
  thunk_FUN_03d233cc(plVar12);
  if (*plVar11 == 0) {
    thunk_FUN_03ce5214(PTR_DAT_08e80470);
    uVar3 = thunk_FUN_03cf5234();
    puVar6 = PTR_DAT_08e83b88;
  }
  else if ((*plVar14 == 0) && (*plVar13 == 0)) {
    thunk_FUN_03ce5214(PTR_DAT_08e80470);
    uVar3 = thunk_FUN_03cf5234();
    puVar6 = PTR_DAT_08e81318;
  }
  else {
    if (*plVar12 != 0) {
      FUN_07184d60(unaff_w21,0,0);
      lVar7 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03cf1244();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x28) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
      puVar6 = PTR_DAT_08e69678;
      uVar3 = thunk_FUN_03cf5234();
      lVar7 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03cf1244(lVar7);
      }
      puVar1 = PTR_DAT_08e69590;
      FUN_05bf90a0(uVar3,0,unaff_w21,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x78));
      puVar10 = (undefined8 *)(lVar2 + 0x28);
      *puVar10 = uVar3;
      thunk_FUN_03d233cc(puVar10,uVar3);
      uVar3 = thunk_FUN_03cf5234(*(undefined8 *)puVar6);
      lVar7 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03cf1244(lVar7);
      }
      System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
                (uVar3,lVar2,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x80),0);
      lVar7 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
      FUN_0717a488(lVar7,uVar3,0,0,0,0,0,0);
      plVar13 = (long *)(lVar2 + 0x30);
      *plVar13 = lVar7;
      thunk_FUN_03d233cc(plVar13,lVar7);
      puVar6 = PTR_DAT_08e812e8;
      plVar14 = *(long **)(lVar2 + 0x10);
      if (plVar14 != (long *)0x0) {
        lVar7 = *plVar14;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08e812e8) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_05b66d10;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_03cf1348(plVar14,*(long *)PTR_DAT_08e812e8,0);
LAB_05b66d10:
        uVar8 = (*(code *)*puVar4)(plVar14,puVar4[1]);
        if ((uVar8 & 1) == 0) {
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_05b66efc;
          lVar7 = *plVar11;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar6) {
                puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                goto LAB_05b66d94;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)puVar6,1);
LAB_05b66d94:
          uVar3 = (*(code *)*puVar4)(plVar11,puVar4[1]);
          uVar5 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e85b08);
          lVar7 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_03cf1244(lVar7);
          }
          FUN_07171ce8(uVar5,lVar2,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x88),0);
          FUN_0717441c(uVar3,uVar5,0,0xffffffff,1,0);
        }
        else {
          if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          FUN_0717bae8(*plVar13,*plVar12,0,0);
        }
        return *puVar10;
      }
LAB_05b66efc:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    thunk_FUN_03ce5214(PTR_DAT_08e80470);
    uVar3 = thunk_FUN_03cf5234();
    puVar6 = PTR_DAT_08e81328;
  }
  uVar5 = thunk_FUN_03ce5214(puVar6);
  FUN_0705a2f8(uVar3,uVar5,0);
                    /* WARNING: Subroutine does not return */
  FUN_03c8f9fc(uVar3);
}


