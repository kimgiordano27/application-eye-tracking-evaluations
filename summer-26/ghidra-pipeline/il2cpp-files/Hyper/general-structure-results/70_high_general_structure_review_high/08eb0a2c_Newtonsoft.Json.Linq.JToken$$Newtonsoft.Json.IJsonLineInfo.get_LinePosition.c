/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JToken$$Newtonsoft.Json.IJsonLineInfo.get_LinePosition
ENTRY_POINT: 08eb0a2c
PROGRAM: Hyper-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void Newtonsoft_Json_Linq_JToken__Newtonsoft_Json_IJsonLineInfo_get_LinePosition
               (undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  long *unaff_x20;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  undefined8 in_stack_00000028;
  
  uVar5 = (*(code *)*param_1)();
  if ((uVar5 & 1) != 0) {
    if (*unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    plVar10 = *(long **)(*unaff_x20 + 0x18);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar7 = *plVar10;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 3) * 0x10 + 0x138);
          goto LAB_08eb0ac8;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_04980e68(plVar10,*unaff_x24,3);
LAB_08eb0ac8:
    lVar7 = (*(code *)*puVar6)(plVar10,puVar6[1]);
    if (*unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    plVar10 = *(long **)(*unaff_x20 + 0x18);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar8 = *plVar10;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_08eb0b38;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_04980e68(plVar10,*unaff_x24,2);
LAB_08eb0b38:
    lVar8 = (*(code *)*puVar6)(plVar10,puVar6[1]);
    if (lVar7 - lVar8 < 0x46) {
      if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      plVar10 = *(long **)(unaff_x26 + 0x50);
      lVar8 = *(long *)PTR_DAT_0ac099d0;
      lVar7 = *(long *)(lVar8 + 0x38);
      if (lVar7 == 0) {
        FUN_04980b90(lVar8);
        lVar7 = *(long *)(lVar8 + 0x38);
      }
      lVar7 = *(long *)(lVar7 + 0x10);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_04980b34();
      }
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      lVar7 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_04980b34();
      }
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar8 = *plVar10;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      uVar11 = **(undefined8 **)(lVar7 + 0xb8);
      uVar13 = *(undefined8 *)PTR_DAT_0ac6ecf0;
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0ac6d268) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 3) * 0x10 + 0x138);
            goto LAB_08eb0c20;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_04980e68(plVar10,*(long *)PTR_DAT_0ac6d268,3);
LAB_08eb0c20:
      (*(code *)*puVar6)(plVar10,uVar13,uVar11,puVar6[1]);
    }
  }
  if (*unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  plVar10 = *(long **)(*unaff_x20 + 0x18);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar7 = *plVar10;
  uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar5 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x24) {
        puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_08eb0c94;
      }
      uVar5 = uVar5 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar5 != 0);
  }
  puVar6 = (undefined8 *)FUN_04980e68(plVar10,*unaff_x24,1);
LAB_08eb0c94:
  uVar5 = (*(code *)*puVar6)(plVar10,puVar6[1]);
  if ((uVar5 & 1) != 0) {
    if (*unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    plVar10 = *(long **)(*unaff_x20 + 0x18);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar7 = *plVar10;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 6) * 0x10 + 0x138);
          goto LAB_08eb0d04;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_04980e68(plVar10,*unaff_x24,6);
LAB_08eb0d04:
    lVar7 = (*(code *)*puVar6)(plVar10,puVar6[1]);
    if (*unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    plVar10 = *(long **)(*unaff_x20 + 0x18);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar8 = *plVar10;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_08eb0d74;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_04980e68(plVar10,*unaff_x24,2);
LAB_08eb0d74:
    lVar8 = (*(code *)*puVar6)(plVar10,puVar6[1]);
    if (lVar7 - lVar8 < 0xe74) {
      if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      plVar10 = *(long **)(unaff_x26 + 0x50);
      lVar8 = *(long *)PTR_DAT_0ac099d0;
      lVar7 = *(long *)(lVar8 + 0x38);
      if (lVar7 == 0) {
        FUN_04980b90(lVar8);
        lVar7 = *(long *)(lVar8 + 0x38);
      }
      lVar7 = *(long *)(lVar7 + 0x10);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_04980b34();
      }
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      lVar7 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_04980b34();
      }
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar8 = *plVar10;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      uVar11 = **(undefined8 **)(lVar7 + 0xb8);
      uVar13 = *(undefined8 *)PTR_DAT_0ac6ecf8;
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0ac6d268) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 3) * 0x10 + 0x138);
            goto LAB_08eb0e5c;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_04980e68(plVar10,*(long *)PTR_DAT_0ac6d268,3);
LAB_08eb0e5c:
      (*(code *)*puVar6)(plVar10,uVar13,uVar11,puVar6[1]);
    }
  }
  if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar7 = *(long *)(unaff_x26 + 0x58);
  lVar8 = *unaff_x20;
  uVar11 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac6e290);
  FUN_063d4f5c(uVar11,lVar8,*(undefined8 *)PTR_DAT_0ac6ece0,0);
  if (*unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar8 = *(long *)(unaff_x19 + 0x10);
  if (lVar8 == 0) {
    lVar8 = *(long *)(unaff_x26 + 0x18);
  }
  uVar14 = *(undefined8 *)(*unaff_x20 + 0x18);
  FUN_06fba06c();
  uVar13 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac6e008);
  FUN_08eabadc(uVar13,uVar14,lVar8,0,0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar7 = FUN_05dda5ac(lVar7,uVar11,uVar13,*(undefined8 *)PTR_DAT_0ac6e2a0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  in_stack_00000028 = FUN_07764808(lVar7,*(undefined8 *)PTR_DAT_0ac6e2b8);
  uVar5 = FUN_076844c8(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac6e2b0);
  if ((uVar5 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000028;
    thunk_FUN_049ee3d8(unaff_x19 + 0x14,0);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_054a0a78(unaff_x19 + 2,&stack0x00000028);
    return;
  }
  plVar10 = (long *)FUN_07684508(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac6e2a8);
  puVar3 = PTR_DAT_0ac6e298;
  puVar2 = PTR_DAT_0ac6cc88;
  lVar7 = *(long *)(unaff_x19 + 0x12);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  plVar12 = *(long **)(lVar7 + 0x18);
  if (plVar12 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_0ac6cc88 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar12 + 0x130)) &&
       (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_0ac6cc88))
    {
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar7 = *plVar10;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0ac6e298) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_08eb1214;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_04980e68(plVar10,*(long *)PTR_DAT_0ac6e298,2);
LAB_08eb1214:
      uVar11 = (*(code *)*puVar6)(plVar10,puVar6[1]);
      lVar7 = *plVar10;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_08eb1274;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_04980e68(plVar10,*(long *)puVar3,1);
LAB_08eb1274:
      uVar13 = (*(code *)*puVar6)(plVar10,puVar6[1]);
      FUN_08ec4320(plVar12,uVar11,uVar13,0);
      if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar7 = *(long *)(unaff_x26 + 0x40);
      if (lVar7 != 0) {
        (**(code **)(lVar7 + 0x18))
                  (*(undefined8 *)(lVar7 + 0x40),plVar12,*(undefined8 *)(lVar7 + 0x28));
      }
      goto LAB_08eb1160;
    }
  }
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar7 = *plVar10;
  uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar5 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0ac6e298) {
        puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
        goto Newtonsoft_Json_Linq_JToken__DeepClone;
      }
      uVar5 = uVar5 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar5 != 0);
  }
  puVar6 = (undefined8 *)FUN_04980e68(plVar10,*(long *)PTR_DAT_0ac6e298,2);
Newtonsoft_Json_Linq_JToken__DeepClone:
  uVar11 = (*(code *)*puVar6)(plVar10,puVar6[1]);
  lVar7 = *plVar10;
  uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar5 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
        puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_08eb10b4;
      }
      uVar5 = uVar5 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar5 != 0);
  }
  puVar6 = (undefined8 *)FUN_04980e68(plVar10,*(long *)puVar3,1);
LAB_08eb10b4:
  uVar13 = (*(code *)*puVar6)(plVar10,puVar6[1]);
  lVar7 = *plVar10;
  uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar5 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
        puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_08eb1110;
      }
      uVar5 = uVar5 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar5 != 0);
  }
  puVar6 = (undefined8 *)FUN_04980e68(plVar10,*(long *)puVar3,0);
LAB_08eb1110:
  uVar4 = (*(code *)*puVar6)(plVar10,puVar6[1]);
  plVar12 = (long *)thunk_FUN_04983f60(*(undefined8 *)puVar2);
  FUN_08ec4214(plVar12,uVar11,uVar13,uVar4 & 1,0);
  if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar7 = *(long *)(unaff_x26 + 0x40);
  if (lVar7 != 0) {
    (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),plVar12,*(undefined8 *)(lVar7 + 0x28))
    ;
  }
LAB_08eb1160:
  puVar2 = PTR_DAT_0ac6e288;
  *unaff_x19 = 0xfffffffe;
  *(undefined8 *)(unaff_x19 + 0x12) = 0;
  thunk_FUN_049ee3d8(unaff_x19 + 0x12,0);
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  FUN_07b6c5d8(unaff_x19 + 2,plVar12,*(undefined8 *)puVar2);
  return;
}


