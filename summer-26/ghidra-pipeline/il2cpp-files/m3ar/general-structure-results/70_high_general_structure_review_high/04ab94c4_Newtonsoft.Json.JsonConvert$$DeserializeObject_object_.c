/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<object>
ENTRY_POINT: 04ab94c4
PROGRAM: m3ar-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonConvert__DeserializeObject<object>(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long unaff_x19;
  long lVar11;
  uint unaff_w20;
  uint unaff_w21;
  undefined4 uVar12;
  ulong unaff_x23;
  undefined8 uVar13;
  undefined8 uVar14;
  
  FUN_0403162c(*(undefined8 *)(param_1 + 0xd88));
  FUN_0403162c(PTR_DAT_08f8b198);
  FUN_0403162c(PTR_DAT_08f78f10);
  puVar10 = *(undefined8 **)(unaff_x19 + 0x38);
  if (puVar10 == (undefined8 *)0x0) {
    FUN_0406ab48();
    puVar10 = *(undefined8 **)(unaff_x19 + 0x38);
  }
  puVar1 = PTR_DAT_08f65618;
  uVar13 = *puVar10;
  if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar13 = FUN_074f3c94(uVar13,0);
  plVar4 = (long *)FUN_07418f70(uVar13,0);
  if (plVar4 == (long *)0x0) goto LAB_04ab9a10;
  uVar5 = FUN_074fe5bc(plVar4,0);
  if ((uVar5 & 1) != 0) {
    return 0;
  }
  uVar5 = FUN_074ff260(plVar4,0);
  if ((uVar5 & 1) != 0) {
    return 0;
  }
  uVar5 = FUN_072a175c(plVar4,0);
  puVar2 = PTR_DAT_08f8b170;
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_072a1688(plVar4,0);
    if ((uVar5 & 1) != 0) {
      lVar6 = (**(code **)(*plVar4 + 0x478))(plVar4,*(undefined8 *)(*plVar4 + 0x480));
      if (lVar6 == 0) goto LAB_04ab9a10;
      if (*(int *)(lVar6 + 0x18) == 0) {
LAB_04ab9a14:
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      plVar4 = (long *)FUN_07418f70(*(undefined8 *)(lVar6 + 0x20),0);
      if (plVar4 == (long *)0x0) goto LAB_04ab9a10;
      (**(code **)(*plVar4 + 0xa08))(plVar4,*(undefined8 *)(*plVar4 + 0xa10));
      if (*(int *)(*(long *)PTR_DAT_08f8b188 + 0xe4) == 0) {
        thunk_FUN_0408f364(*(long *)PTR_DAT_08f8b188);
      }
      lVar6 = FUN_072696ec();
      if (lVar6 == 0) {
        return 0;
      }
      uVar13 = *(undefined8 *)PTR_DAT_08f8b198;
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      plVar7 = (long *)FUN_074f3c94(uVar13,0);
      plVar8 = (long *)FUN_040316d0(*(undefined8 *)PTR_DAT_08f78f10,1);
      lVar11 = (**(code **)(*plVar4 + 0xa08))(plVar4,*(undefined8 *)(*plVar4 + 0xa10));
      if (plVar8 == (long *)0x0) goto LAB_04ab9a10;
      if ((lVar11 != 0) &&
         (lVar9 = thunk_FUN_0406ddbc(lVar11,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
LAB_04ab9a18:
        uVar13 = thunk_FUN_0407b7a8();
                    /* WARNING: Subroutine does not return */
        FUN_04031750(uVar13,0);
      }
      if ((int)plVar8[3] == 0) goto LAB_04ab9a14;
      plVar8[4] = lVar11;
      if (plVar7 == (long *)0x0) goto LAB_04ab9a10;
      uVar13 = (**(code **)(*plVar7 + 0x988))(plVar7,plVar8,*(undefined8 *)(*plVar7 + 0x990));
      plVar4 = (long *)FUN_040316d0(*(undefined8 *)PTR_DAT_08f65d88,1);
      if (plVar4 == (long *)0x0) goto LAB_04ab9a10;
      lVar11 = thunk_FUN_0406ddbc(lVar6,*(undefined8 *)(*plVar4 + 0x40));
      if (lVar11 == 0) goto LAB_04ab9a18;
      if ((int)plVar4[3] == 0) goto LAB_04ab9a14;
      plVar4[4] = lVar6;
      lVar6 = FUN_0750ff7c(uVar13,plVar4,0);
      goto LAB_04ab99b4;
    }
    if ((unaff_x23 & 1) == 0) {
      uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar13 = FUN_074f3c94(uVar13,0);
      uVar13 = FUN_04a8d7e4(uVar13,*(undefined8 *)PTR_DAT_08f8b168);
      lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0406aaec(lVar6);
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0408f364(lVar6);
      }
      lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0406aaec();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
      if (lVar6 == 0) {
        lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0406aaec();
        }
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0406aaec();
        }
        uVar14 = **(undefined8 **)(lVar6 + 0xb8);
        lVar6 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f8b190);
        FUN_053442e0(lVar6,uVar14,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),0);
        lVar11 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_0406aaec();
        }
        *(long *)(*(long *)(lVar11 + 0xb8) + 8) = lVar6;
        if ((*(ushort *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x18) + 0x135) & 1) == 0) {
          FUN_0406aaec();
        }
      }
      uVar3 = FUN_04ac8d8c(uVar13,lVar6,*(undefined8 *)PTR_DAT_08f8b180);
      uVar12 = 0;
      unaff_w21 = uVar3 | unaff_w21;
    }
    else {
      uVar12 = 1;
    }
LAB_04ab98cc:
    uVar3 = unaff_w20;
    puVar2 = PTR_DAT_08f8b170;
    lVar6 = *(long *)PTR_DAT_08f8b170;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar6 = *(long *)puVar2;
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0408f364(*(long *)(puVar1 + 0xe0));
    }
    uVar13 = FUN_074f3c94(uVar13,0);
    if (lVar6 == 0) {
LAB_04ab9a10:
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar6 = FUN_0729d440(lVar6,uVar13,unaff_w21 & 1,0);
  }
  else {
    lVar6 = *(long *)PTR_DAT_08f8b170;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar6 = *(long *)puVar2;
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0408f364(*(long *)(puVar1 + 0xe0));
    }
    uVar13 = FUN_074f3c94(uVar13,0);
    if (lVar6 == 0) goto LAB_04ab9a10;
    uVar3 = 1;
    lVar6 = FUN_0729d440(lVar6,uVar13,1,0);
    unaff_w21 = 0;
    uVar12 = 1;
    unaff_w20 = 1;
    if (lVar6 == 0) goto LAB_04ab98cc;
  }
  uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar13 = FUN_074f3c94(uVar13,0);
  if (*(int *)(*(long *)PTR_DAT_08f8b178 + 0xe4) == 0) {
    thunk_FUN_0408f364(*(long *)PTR_DAT_08f8b178);
  }
  plVar4 = (long *)FUN_072abbf8(lVar6,uVar13,uVar3 & 1,uVar12,unaff_w21 & 1,0);
  if (plVar4 == (long *)0x0) {
    return 0;
  }
  uVar13 = (**(code **)(*plVar4 + 0xa08))(plVar4,*(undefined8 *)(*plVar4 + 0xa10));
  lVar6 = FUN_072bb7e0(uVar13,0,0);
LAB_04ab99b4:
  lVar11 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_0406aaec(lVar11);
  }
  if (lVar6 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = thunk_FUN_0406ddbc(lVar6,lVar11);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04031c0c(lVar6,lVar11);
    }
  }
  return lVar9;
}


