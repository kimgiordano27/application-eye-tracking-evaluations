/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 03ddd5c4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__ICollection_Add<OVRPlugin_Qpl_Annotation_Builder_Entry>(void)

{
  char cVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined1 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar12;
  long lVar13;
  long *unaff_x23;
  undefined8 in_stack_00000008;
  long *in_stack_00000018;
  
  if (*unaff_x23 == 0) {
    FUN_02feb320();
  }
  puVar4 = PTR_DAT_06f99138;
  in_stack_00000018 = (long *)0x0;
  if (*(int *)(*(long *)PTR_DAT_06f99138 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar3 = PTR_DAT_06f6d6a0;
  uVar12 = *(undefined8 *)*unaff_x23;
  if (*(int *)(*(long *)PTR_DAT_06f6d6a0 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar12 = FUN_05afde1c(uVar12,0);
  uVar6 = FUN_05afde1c(*(undefined8 *)(*unaff_x23 + 8),0);
  if (*(int *)(*(long *)PTR_DAT_06f9a428 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f9a428);
  }
  uVar7 = FUN_0697dd2c(*(undefined8 *)(*(long *)puVar4 + 0xb8),uVar12,uVar6,&stack0x00000018,0);
  plVar10 = in_stack_00000018;
  if ((uVar7 & 1) != 0) {
    lVar13 = *(long *)(*unaff_x23 + 0x18);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_02feb2c4(lVar13);
    }
    if (plVar10 == (long *)0x0) goto LAB_03ddde94;
    lVar8 = thunk_FUN_03010710(plVar10,lVar13);
    if (lVar8 != 0) {
      lVar13 = *(long *)(*unaff_x23 + 0x18);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_02feb2c4(lVar13);
      }
      lVar8 = thunk_FUN_03010710(plVar10,lVar13);
      if (lVar8 != 0) {
        uVar5 = (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40));
        *unaff_x19 = uVar5;
        return 1;
      }
    }
    goto LAB_03dddea0;
  }
  uVar12 = *(undefined8 *)*unaff_x23;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  lVar13 = FUN_05afde1c(uVar12,0);
  if (lVar13 == 0) goto LAB_03ddde94;
  uVar7 = FUN_05b092bc(lVar13,0);
  puVar11 = (undefined8 *)*unaff_x23;
  if ((uVar7 & 1) != 0) {
    uVar12 = *puVar11;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar12 = FUN_05afde1c(uVar12,0);
    uVar6 = FUN_05afde1c(*(undefined8 *)(*unaff_x23 + 8),0);
    uVar7 = FUN_05b0716c(uVar12,uVar6,0);
    puVar11 = (undefined8 *)*unaff_x23;
    if ((uVar7 & 1) == 0) goto LAB_03ddd78c;
LAB_03ddd77c:
    puVar9 = (undefined1 *)FUN_03e4cf38();
    goto LAB_03ddde0c;
  }
LAB_03ddd78c:
  lVar13 = puVar11[9];
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_02feb2c4();
  }
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  lVar8 = *(long *)(*unaff_x23 + 0x40);
  lVar13 = *(long *)(lVar8 + 0x20);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_02feb2c4();
  }
  lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_02feb2c4();
  }
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  lVar13 = *(long *)(lVar8 + 0x20);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_02feb2c4();
  }
  lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_02feb2c4(lVar13);
  }
  lVar8 = *(long *)(*unaff_x23 + 0x58);
  cVar1 = *(char *)(*(long *)(lVar13 + 0xb8) + 8);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02feb2c4();
  }
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  lVar8 = *(long *)(*unaff_x23 + 0x50);
  lVar13 = *(long *)(lVar8 + 0x20);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_02feb2c4();
  }
  lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_02feb2c4();
  }
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  lVar13 = *(long *)(lVar8 + 0x20);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_02feb2c4();
  }
  lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_02feb2c4();
  }
  cVar2 = *(char *)(*(long *)(lVar13 + 0xb8) + 8);
  if (cVar1 == '\0') {
    if (cVar2 == '\0') {
LAB_03ddda54:
      lVar13 = *(long *)(*unaff_x23 + 0x48);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_02feb2c4();
      }
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      lVar8 = *(long *)(*unaff_x23 + 0x68);
      lVar13 = *(long *)(lVar8 + 0x20);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_02feb2c4();
      }
      lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_02feb2c4();
      }
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      lVar13 = *(long *)(lVar8 + 0x20);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_02feb2c4();
      }
      lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_02feb2c4();
      }
      if (*(char *)(*(long *)(lVar13 + 0xb8) + 0xf) != '\0') {
        uVar12 = *unaff_x20;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar7 = FUN_03e120d0(uVar12);
        if ((uVar7 & 1) != 0) {
          return 1;
        }
      }
      lVar13 = *(long *)(*unaff_x23 + 0x48);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_02feb2c4();
      }
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      lVar8 = *(long *)(*unaff_x23 + 0x78);
      lVar13 = *(long *)(lVar8 + 0x20);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_02feb2c4();
      }
      lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_02feb2c4();
      }
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      lVar13 = *(long *)(lVar8 + 0x20);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_02feb2c4();
      }
      lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_02feb2c4();
      }
      if (*(char *)(*(long *)(lVar13 + 0xb8) + 6) != '\0') {
        uVar12 = *(undefined8 *)*unaff_x23;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar12 = FUN_05afde1c(uVar12,0);
        uVar6 = FUN_05afde1c(*(undefined8 *)PTR_DAT_06f80908,0);
        uVar7 = FUN_05b0716c(uVar12,uVar6,0);
        if ((uVar7 & 1) != 0) {
          uVar12 = ((undefined8 *)*unaff_x23)[1];
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          uVar12 = FUN_05afde1c(uVar12,0);
          in_stack_00000008 = *unaff_x20;
          plVar10 = (long *)thunk_FUN_0301043c(*(undefined8 *)(*unaff_x23 + 0x60),&stack0x00000008);
          if (*(int *)(*(long *)PTR_DAT_06f6d848 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          if ((plVar10 != (long *)0x0) && (*plVar10 != *(long *)PTR_DAT_06f6df20)) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe9884(plVar10);
          }
          plVar10 = (long *)FUN_05b22e6c(uVar12,plVar10,0);
          lVar13 = *(long *)(*unaff_x23 + 0x30);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_02feb2c4(lVar13);
          }
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          if (*(long *)(*plVar10 + 0x40) != *(long *)(lVar13 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe9884(plVar10);
          }
          puVar9 = (undefined1 *)thunk_FUN_03010960(plVar10);
          goto LAB_03ddde0c;
        }
        uVar12 = *(undefined8 *)*unaff_x23;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar12 = FUN_05afde1c(uVar12,0);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_02fdcff0(*(long *)puVar4);
        }
        uVar7 = FUN_0697e274(uVar12,0);
        if ((uVar7 & 1) != 0) goto LAB_03ddd77c;
      }
      uVar6 = *unaff_x20;
      in_stack_00000008 = uVar6;
      uVar12 = thunk_FUN_0301043c(*(undefined8 *)(*unaff_x23 + 0x60),&stack0x00000008);
      lVar13 = *(long *)(*unaff_x23 + 0x30);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_02feb2c4(lVar13);
      }
      lVar13 = thunk_FUN_03010710(uVar12,lVar13);
      if (lVar13 != 0) {
        in_stack_00000008 = uVar6;
        uVar12 = thunk_FUN_0301043c(*(undefined8 *)(*unaff_x23 + 0x60),&stack0x00000008);
        lVar13 = *(long *)(*unaff_x23 + 0x30);
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_02feb2c4(lVar13);
        }
        plVar10 = (long *)thunk_FUN_03010710(uVar12,lVar13);
        goto LAB_03ddddcc;
      }
      uVar12 = *(undefined8 *)(*unaff_x23 + 8);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      plVar10 = (long *)FUN_05afde1c(uVar12,0);
      uVar12 = FUN_05afde1c(*(undefined8 *)*unaff_x23,0);
      if (plVar10 == (long *)0x0) goto LAB_03ddde94;
      uVar7 = (**(code **)(*plVar10 + 0x2b8))(plVar10,uVar12,*(undefined8 *)(*plVar10 + 0x2c0));
      if ((uVar7 & 1) == 0) {
LAB_03ddd900:
        *unaff_x19 = 0;
        return 0;
      }
    }
    else {
      uVar12 = *(undefined8 *)(*unaff_x23 + 8);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar12 = FUN_05afde1c(uVar12,0);
      uVar6 = FUN_05afde1c(*(undefined8 *)*unaff_x23,0);
      uVar6 = FUN_05af18ac(uVar6,0);
      uVar7 = FUN_05b0716c(uVar12,uVar6,0);
      if ((uVar7 & 1) == 0) goto LAB_03ddda54;
    }
    in_stack_00000008 = *unaff_x20;
    plVar10 = (long *)thunk_FUN_0301043c(*(undefined8 *)(*unaff_x23 + 0x60),&stack0x00000008);
  }
  else {
    if (cVar2 != '\0') {
      uVar12 = *(undefined8 *)(*unaff_x23 + 8);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar12 = FUN_05afde1c(uVar12,0);
      uVar12 = FUN_05af18ac(uVar12,0);
      uVar6 = FUN_05afde1c(*(undefined8 *)*unaff_x23,0);
      uVar6 = FUN_05af18ac(uVar6,0);
      uVar7 = FUN_05b07f44(uVar12,uVar6,0);
      if ((uVar7 & 1) != 0) goto LAB_03ddd900;
    }
    uVar12 = *(undefined8 *)(*unaff_x23 + 8);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar12 = FUN_05afde1c(uVar12,0);
    plVar10 = (long *)FUN_05af18ac(uVar12,0);
    if (plVar10 == (long *)0x0) goto LAB_03ddde94;
    uVar7 = (**(code **)(*plVar10 + 0x5a8))(plVar10,*(undefined8 *)(*plVar10 + 0x5b0));
    if ((uVar7 & 1) == 0) {
      in_stack_00000008 = *unaff_x20;
      uVar12 = thunk_FUN_0301043c(*(undefined8 *)(*unaff_x23 + 0x60),&stack0x00000008);
      if (*(int *)(*(long *)PTR_DAT_06f7a4f8 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f7a4f8);
      }
      plVar10 = (long *)FUN_05a6d944(uVar12,plVar10,0);
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_06f6d848 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar12 = FUN_05b238cc(plVar10,0);
      in_stack_00000008 = *unaff_x20;
      uVar6 = thunk_FUN_0301043c(*(undefined8 *)(*unaff_x23 + 0x60),&stack0x00000008);
      if (*(int *)(*(long *)PTR_DAT_06f7a4f8 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f7a4f8);
      }
      uVar12 = FUN_05a6d944(uVar6,uVar12,0);
      plVar10 = (long *)FUN_05b23990(plVar10,uVar12,0);
    }
  }
LAB_03ddddcc:
  lVar13 = *(long *)(*unaff_x23 + 0x30);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_02feb2c4(lVar13);
  }
  if (plVar10 == (long *)0x0) {
LAB_03ddde94:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  if (*(long *)(*plVar10 + 0x40) != *(long *)(lVar13 + 0x40)) {
LAB_03dddea0:
                    /* WARNING: Subroutine does not return */
    FUN_02fe9884(plVar10,lVar13);
  }
  puVar9 = (undefined1 *)thunk_FUN_03010960(plVar10);
LAB_03ddde0c:
  *unaff_x19 = *puVar9;
  return 1;
}


