/*
FUNCTION_NAME: System.Net.HttpWebRequest$$set_FinishedReading
ENTRY_POINT: 0625d2a0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 132
LABEL: framework_eye_tracking_support_or_permission_path_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_11;validity_or_gating_hits_20;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0625d50c) */
/* WARNING: Removing unreachable block (ram,0x0625d950) */

void System_Net_HttpWebRequest__set_FinishedReading(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  undefined8 uVar12;
  long unaff_x24;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *unaff_x28;
  long *unaff_x29;
  long in_stack_00000040;
  
  do {
    lVar7 = FUN_062608f0();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    FUN_0627a09c(lVar7);
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    FUN_0627b54c();
    do {
      uVar5 = FUN_052d44b4(&stack0x00000030,*unaff_x28);
      lVar7 = in_stack_00000040;
      if ((uVar5 & 1) == 0) {
        FUN_052d44b0(&stack0x00000030,*(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate___TypeInfo);
        puVar9 = (undefined8 *)PTR_DAT_07282378;
        uVar13 = *(undefined8 *)PTR_DAT_07282378;
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        FUN_059324dc(uVar13,0);
        uVar5 = FUN_0593b434();
        if (((uVar5 & 1) == 0) || (plVar8 = *(long **)(unaff_x21 + 0x20), plVar8 == (long *)0x0))
        goto LAB_0625d510;
        plVar8 = (long *)(**(code **)(*plVar8 + 0x388))(plVar8,*(undefined8 *)(*plVar8 + 0x390));
        puVar3 = PTR_DAT_0727a180;
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        goto LAB_0625d354;
      }
      FUN_06272714();
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar6 = FUN_06260884(lVar7);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
    } while (*(char *)(lVar6 + 0x58) != '\0');
    uVar13 = *(undefined8 *)(lVar7 + 0x30);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar5 = FUN_0593c20c(uVar13,0,0);
    if ((uVar5 & 1) != 0) {
      uVar13 = *(undefined8 *)(lVar7 + 0x30);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar5 = FUN_0593c20c(uVar13);
      if ((uVar5 & 1) != 0) {
        lVar7 = FUN_0625f964();
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar5 = FUN_0627a884(lVar7,0);
        if ((uVar5 & 1) != 0) {
          FUN_06272714(lVar7,0);
        }
      }
    }
  } while( true );
LAB_0625d354:
  lVar6 = *plVar8;
  lVar7 = *(long *)puVar3;
  uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar5 != 0) {
    piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar7) {
        puVar9 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_0625d3a0;
      }
      uVar5 = uVar5 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar5 != 0);
  }
  puVar9 = (undefined8 *)FUN_032937ac(plVar8,lVar7,0);
LAB_0625d3a0:
  uVar5 = (*(code *)*puVar9)(plVar8,puVar9[1]);
  puVar2 = PTR_DAT_07279f60;
  if ((uVar5 & 1) == 0) {
    plVar8 = (long *)thunk_FUN_032a55a4(plVar8,*(undefined8 *)PTR_DAT_07279f60);
    puVar9 = (undefined8 *)PTR_DAT_07282378;
    if (plVar8 == (long *)0x0) goto LAB_0625d510;
    lVar7 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 == 0) goto LAB_0625d4cc;
    piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    goto LAB_0625d4b4;
  }
  lVar6 = *plVar8;
  lVar7 = *(long *)puVar3;
  uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar5 != 0) {
    piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar7) {
        puVar9 = (undefined8 *)(lVar6 + (long)(*piVar11 + 1) * 0x10 + 0x138);
        goto System_Net_HttpWebRequest__GetObjectData;
      }
      uVar5 = uVar5 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar5 != 0);
  }
  puVar9 = (undefined8 *)FUN_032937ac(plVar8,lVar7,1);
System_Net_HttpWebRequest__GetObjectData:
  plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
  if (plVar10 != (long *)0x0) {
    bVar1 = *(byte *)(*unaff_x29 + 0x130);
    if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x29)) {
                    /* WARNING: Subroutine does not return */
      FUN_032d618c(plVar10);
    }
  }
  plVar10 = *(long **)(unaff_x19 + 0x70);
  uVar13 = FUN_0625c6cc();
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8(uVar13,uVar13);
  }
  (**(code **)(*plVar10 + 0x308))(plVar10,uVar13,*(undefined8 *)(*plVar10 + 0x310));
  goto LAB_0625d354;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar11 = piVar11 + 4;
    if (uVar5 == 0) break;
LAB_0625d4b4:
    if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
      puVar9 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
      goto FUN_0625d4e8;
    }
  }
LAB_0625d4cc:
  puVar9 = (undefined8 *)FUN_032937ac(plVar8,*(long *)puVar2,0);
FUN_0625d4e8:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  puVar9 = (undefined8 *)PTR_DAT_07282378;
LAB_0625d510:
  if (unaff_x22 == (long *)0x0) goto LAB_0625d930;
  uVar13 = (**(code **)(*unaff_x22 + 0x8b8))();
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*unaff_x29);
  }
  uVar5 = FUN_0593c20c(uVar13,0,0);
  if ((uVar5 & 1) == 0) {
LAB_0625d70c:
    FUN_06261490();
    if (unaff_x24 == 0) goto LAB_0625d930;
  }
  else {
    (**(code **)(*unaff_x22 + 0x8b8))();
    lVar7 = FUN_0625f964();
    if (lVar7 == 0) goto LAB_0625d930;
    plVar8 = *(long **)(lVar7 + 0x10);
    if (plVar8 == (long *)0x0) {
LAB_0625d5b0:
      plVar8 = (long *)0x0;
    }
    else {
      bVar1 = *(byte *)(*(long *)OVRPlugin_EyeGazeState___TypeInfo + 0x130);
      if (*(byte *)(*plVar8 + 0x130) < bVar1) goto LAB_0625d5b0;
      if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)OVRPlugin_EyeGazeState___TypeInfo) {
        plVar8 = (long *)0x0;
      }
    }
    uVar13 = (**(code **)(*unaff_x22 + 0x8b8))();
    uVar14 = *puVar9;
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*unaff_x29);
    }
    uVar14 = FUN_059324dc(uVar14,0);
    uVar5 = FUN_0593c20c(uVar13,uVar14,0);
    if ((uVar5 & 1) == 0) {
      FUN_06261374();
      if (plVar8 == (long *)0x0) goto LAB_0625d930;
    }
    else {
      *(long *)(unaff_x19 + 0x60) = lVar7;
      thunk_FUN_0333a630((long *)(unaff_x19 + 0x60),lVar7);
      if (plVar8 == (long *)0x0) goto LAB_0625d930;
      uVar5 = FUN_0627d0e4(plVar8,0);
      if ((uVar5 & 1) == 0) {
        if (unaff_x24 == 0) goto LAB_0625d930;
        *(undefined1 *)(unaff_x24 + 0x79) = 0;
      }
      FUN_06261374();
    }
    uVar5 = FUN_0627d0e4(plVar8,0);
    if ((uVar5 & 1) == 0) goto LAB_0625d70c;
    if (unaff_x24 == 0) goto LAB_0625d930;
    plVar8 = *(long **)(unaff_x24 + 0x18);
    if (plVar8 != (long *)0x0) {
      lVar7 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07280318) {
            puVar9 = (undefined8 *)(lVar7 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_0625d6f8;
          }
          uVar5 = uVar5 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_032937ac(plVar8,*(long *)PTR_DAT_07280318,1);
LAB_0625d6f8:
      iVar4 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      puVar3 = OVRPlugin_Vector4f___TypeInfo;
      if (iVar4 != 1) {
        thunk_FUN_032e1da0(OVRPlugin_Vector4f___TypeInfo);
        FUN_02d9d3e0();
        lVar7 = thunk_FUN_032e1da0(puVar3);
        uVar13 = **(undefined8 **)(lVar7 + 0xb8);
        FUN_02d9d3f0();
        lVar7 = *(long *)(unaff_x19 + 0x58);
        FUN_02d9d3f0(lVar7);
        uVar14 = *(undefined8 *)(lVar7 + 0x30);
        FUN_02d9d3f0();
        lVar7 = *(long *)(unaff_x19 + 0x60);
        FUN_02d9d3f0(lVar7);
        lVar7 = *(long *)(lVar7 + 0x58);
        FUN_02d9d3f0(lVar7);
        uVar13 = FUN_057ab61c(uVar13,uVar14,*(undefined8 *)(lVar7 + 0x30),0);
        goto LAB_0625d9c8;
      }
      goto LAB_0625d70c;
    }
    FUN_06261490();
  }
  if ((*(long *)(unaff_x24 + 0x68) != 0) && (uVar5 = FUN_0627d0e4(), (uVar5 & 1) == 0)) {
    lVar7 = *(long *)(unaff_x24 + 0x68);
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0x28) == 0)) {
LAB_0625d930:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar7 + 0x28) + 0x10);
    uVar14 = *(undefined8 *)PTR_DAT_072813d0;
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar14 = FUN_059324dc(uVar14,0);
    uVar5 = FUN_0593c20c(uVar13,uVar14,0);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(lVar7 + 0x28) == 0) goto LAB_0625d930;
      uVar13 = *(undefined8 *)(*(long *)(lVar7 + 0x28) + 0x10);
      uVar14 = *(undefined8 *)PTR_DAT_07281f68;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar14 = FUN_059324dc(uVar14,0);
      uVar5 = FUN_0593c20c(uVar13,uVar14,0);
      if ((uVar5 & 1) != 0) {
        if (*(long *)(lVar7 + 0x28) == 0) goto LAB_0625d930;
        uVar13 = *(undefined8 *)(*(long *)(lVar7 + 0x28) + 0x10);
        uVar14 = *(undefined8 *)OVRPlugin_Vector3f___TypeInfo;
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar14 = FUN_059324dc(uVar14,0);
        uVar5 = FUN_0593c20c(uVar13,uVar14,0);
        if ((uVar5 & 1) != 0) {
          if (*(long *)(lVar7 + 0x28) == 0) goto LAB_0625d930;
          uVar13 = *(undefined8 *)(*(long *)(lVar7 + 0x28) + 0x10);
          uVar14 = *(undefined8 *)PTR_DAT_07284e10;
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          uVar14 = FUN_059324dc(uVar14,0);
          uVar5 = FUN_0593c20c(uVar13,uVar14,0);
          puVar3 = OVRPlugin_Vector4f___TypeInfo;
          if ((uVar5 & 1) != 0) {
            thunk_FUN_032e1da0(OVRPlugin_Vector4f___TypeInfo);
            FUN_02d9d3e0();
            lVar6 = thunk_FUN_032e1da0(puVar3);
            uVar14 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 8);
            FUN_02d9d3f0();
            lVar6 = *(long *)(unaff_x19 + 0x58);
            FUN_02d9d3f0(lVar6);
            uVar13 = *(undefined8 *)(lVar6 + 0x30);
            FUN_02d9d3f0(lVar7);
            uVar12 = *(undefined8 *)(lVar7 + 0x10);
            FUN_02d9d3f0(lVar7);
            lVar7 = *(long *)(lVar7 + 0x28);
            FUN_02d9d3f0(lVar7);
            uVar13 = FUN_057ab660(uVar14,uVar13,uVar12,*(undefined8 *)(lVar7 + 0x30),0);
LAB_0625d9c8:
            thunk_FUN_032e1da0(PTR_DAT_07279578);
            uVar14 = thunk_FUN_032a56a0();
            FUN_0592371c(uVar14,uVar13,0);
            uVar13 = thunk_FUN_032e1da0(OVRPlugin_VirtualKeyboardModelAnimationState___TypeInfo);
                    /* WARNING: Subroutine does not return */
            FUN_032d5dbc(uVar14,uVar13);
          }
        }
      }
    }
  }
  return;
}


