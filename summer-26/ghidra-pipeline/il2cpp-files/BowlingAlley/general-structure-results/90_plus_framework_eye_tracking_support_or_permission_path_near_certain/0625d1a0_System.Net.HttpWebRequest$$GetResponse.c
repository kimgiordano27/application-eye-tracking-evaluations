/*
FUNCTION_NAME: System.Net.HttpWebRequest$$GetResponse
ENTRY_POINT: 0625d1a0
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

void System_Net_HttpWebRequest__GetResponse(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  undefined8 uVar13;
  long unaff_x24;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  
  FUN_041e3694(&stack0x00000010);
  puVar2 = PTR_DAT_07279510;
  in_stack_00000038 = in_stack_00000018;
  in_stack_00000030 = in_stack_00000010;
  in_stack_00000040 = in_stack_00000020;
  while (uVar6 = FUN_052d44b4(&stack0x00000030,*unaff_x28), lVar8 = in_stack_00000040,
        (uVar6 & 1) != 0) {
    FUN_06272714();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar7 = FUN_06260884(lVar8);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if (*(char *)(lVar7 + 0x58) == '\0') {
      uVar14 = *(undefined8 *)(lVar8 + 0x30);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar6 = FUN_0593c20c(uVar14,0,0);
      if ((uVar6 & 1) != 0) {
        uVar14 = *(undefined8 *)(lVar8 + 0x30);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar6 = FUN_0593c20c(uVar14);
        if ((uVar6 & 1) != 0) {
          lVar8 = FUN_0625f964();
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          uVar6 = FUN_0627a884(lVar8,0);
          if ((uVar6 & 1) != 0) {
            FUN_06272714(lVar8,0);
          }
        }
      }
      lVar8 = FUN_062608f0();
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_0627a09c(lVar8);
      if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_0627b54c();
    }
  }
  FUN_052d44b0(&stack0x00000030,*(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate___TypeInfo);
  puVar10 = (undefined8 *)PTR_DAT_07282378;
  uVar14 = *(undefined8 *)PTR_DAT_07282378;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_059324dc(uVar14,0);
  uVar6 = FUN_0593b434();
  if (((uVar6 & 1) != 0) && (plVar9 = *(long **)(unaff_x21 + 0x20), plVar9 != (long *)0x0)) {
    plVar9 = (long *)(**(code **)(*plVar9 + 0x388))(plVar9,*(undefined8 *)(*plVar9 + 0x390));
    puVar4 = PTR_DAT_0727a180;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    do {
      lVar7 = *plVar9;
      lVar8 = *(long *)puVar4;
      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar6 != 0) {
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar8) {
            puVar10 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0625d3a0;
          }
          uVar6 = uVar6 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar6 != 0);
      }
      puVar10 = (undefined8 *)FUN_032937ac(plVar9,lVar8,0);
LAB_0625d3a0:
      uVar6 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      puVar3 = PTR_DAT_07279f60;
      if ((uVar6 & 1) == 0) {
        plVar9 = (long *)thunk_FUN_032a55a4(plVar9,*(undefined8 *)PTR_DAT_07279f60);
        puVar10 = (undefined8 *)PTR_DAT_07282378;
        if (plVar9 == (long *)0x0) break;
        lVar8 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar6 == 0) goto LAB_0625d4cc;
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_0625d4b4;
      }
      lVar7 = *plVar9;
      lVar8 = *(long *)puVar4;
      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar6 != 0) {
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar8) {
            puVar10 = (undefined8 *)(lVar7 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto System_Net_HttpWebRequest__GetObjectData;
          }
          uVar6 = uVar6 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar6 != 0);
      }
      puVar10 = (undefined8 *)FUN_032937ac(plVar9,lVar8,1);
System_Net_HttpWebRequest__GetObjectData:
      plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
      if (plVar11 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(plVar11);
        }
      }
      plVar11 = *(long **)(unaff_x19 + 0x70);
      uVar14 = FUN_0625c6cc();
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8(uVar14,uVar14);
      }
      (**(code **)(*plVar11 + 0x308))(plVar11,uVar14,*(undefined8 *)(*plVar11 + 0x310));
    } while( true );
  }
  goto LAB_0625d510;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar12 = piVar12 + 4;
    if (uVar6 == 0) break;
LAB_0625d4b4:
    if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
      puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
      goto FUN_0625d4e8;
    }
  }
LAB_0625d4cc:
  puVar10 = (undefined8 *)FUN_032937ac(plVar9,*(long *)puVar3,0);
FUN_0625d4e8:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
  puVar10 = (undefined8 *)PTR_DAT_07282378;
LAB_0625d510:
  if (unaff_x22 == (long *)0x0) goto LAB_0625d930;
  uVar14 = (**(code **)(*unaff_x22 + 0x8b8))();
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar2);
  }
  uVar6 = FUN_0593c20c(uVar14,0,0);
  if ((uVar6 & 1) == 0) {
LAB_0625d70c:
    FUN_06261490();
    if (unaff_x24 == 0) goto LAB_0625d930;
  }
  else {
    (**(code **)(*unaff_x22 + 0x8b8))();
    lVar8 = FUN_0625f964();
    if (lVar8 == 0) goto LAB_0625d930;
    plVar9 = *(long **)(lVar8 + 0x10);
    if (plVar9 == (long *)0x0) {
LAB_0625d5b0:
      plVar9 = (long *)0x0;
    }
    else {
      bVar1 = *(byte *)(*(long *)OVRPlugin_EyeGazeState___TypeInfo + 0x130);
      if (*(byte *)(*plVar9 + 0x130) < bVar1) goto LAB_0625d5b0;
      if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)OVRPlugin_EyeGazeState___TypeInfo) {
        plVar9 = (long *)0x0;
      }
    }
    uVar14 = (**(code **)(*unaff_x22 + 0x8b8))();
    uVar15 = *puVar10;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*(long *)puVar2);
    }
    uVar15 = FUN_059324dc(uVar15,0);
    uVar6 = FUN_0593c20c(uVar14,uVar15,0);
    if ((uVar6 & 1) == 0) {
      FUN_06261374();
      if (plVar9 == (long *)0x0) goto LAB_0625d930;
    }
    else {
      *(long *)(unaff_x19 + 0x60) = lVar8;
      thunk_FUN_0333a630((long *)(unaff_x19 + 0x60),lVar8);
      if (plVar9 == (long *)0x0) goto LAB_0625d930;
      uVar6 = FUN_0627d0e4(plVar9,0);
      if ((uVar6 & 1) == 0) {
        if (unaff_x24 == 0) goto LAB_0625d930;
        *(undefined1 *)(unaff_x24 + 0x79) = 0;
      }
      FUN_06261374();
    }
    uVar6 = FUN_0627d0e4(plVar9,0);
    if ((uVar6 & 1) == 0) goto LAB_0625d70c;
    if (unaff_x24 == 0) goto LAB_0625d930;
    plVar9 = *(long **)(unaff_x24 + 0x18);
    if (plVar9 != (long *)0x0) {
      lVar8 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07280318) {
            puVar10 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_0625d6f8;
          }
          uVar6 = uVar6 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar6 != 0);
      }
      puVar10 = (undefined8 *)FUN_032937ac(plVar9,*(long *)PTR_DAT_07280318,1);
LAB_0625d6f8:
      iVar5 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      puVar4 = OVRPlugin_Vector4f___TypeInfo;
      if (iVar5 != 1) {
        thunk_FUN_032e1da0(OVRPlugin_Vector4f___TypeInfo);
        FUN_02d9d3e0();
        lVar8 = thunk_FUN_032e1da0(puVar4);
        uVar14 = **(undefined8 **)(lVar8 + 0xb8);
        FUN_02d9d3f0();
        lVar8 = *(long *)(unaff_x19 + 0x58);
        FUN_02d9d3f0(lVar8);
        uVar15 = *(undefined8 *)(lVar8 + 0x30);
        FUN_02d9d3f0();
        lVar8 = *(long *)(unaff_x19 + 0x60);
        FUN_02d9d3f0(lVar8);
        lVar8 = *(long *)(lVar8 + 0x58);
        FUN_02d9d3f0(lVar8);
        uVar14 = FUN_057ab61c(uVar14,uVar15,*(undefined8 *)(lVar8 + 0x30),0);
        goto LAB_0625d9c8;
      }
      goto LAB_0625d70c;
    }
    FUN_06261490();
  }
  if ((*(long *)(unaff_x24 + 0x68) != 0) && (uVar6 = FUN_0627d0e4(), (uVar6 & 1) == 0)) {
    lVar8 = *(long *)(unaff_x24 + 0x68);
    if ((lVar8 == 0) || (*(long *)(lVar8 + 0x28) == 0)) {
LAB_0625d930:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar14 = *(undefined8 *)(*(long *)(lVar8 + 0x28) + 0x10);
    uVar15 = *(undefined8 *)PTR_DAT_072813d0;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar15 = FUN_059324dc(uVar15,0);
    uVar6 = FUN_0593c20c(uVar14,uVar15,0);
    if ((uVar6 & 1) != 0) {
      if (*(long *)(lVar8 + 0x28) == 0) goto LAB_0625d930;
      uVar14 = *(undefined8 *)(*(long *)(lVar8 + 0x28) + 0x10);
      uVar15 = *(undefined8 *)PTR_DAT_07281f68;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar15 = FUN_059324dc(uVar15,0);
      uVar6 = FUN_0593c20c(uVar14,uVar15,0);
      if ((uVar6 & 1) != 0) {
        if (*(long *)(lVar8 + 0x28) == 0) goto LAB_0625d930;
        uVar14 = *(undefined8 *)(*(long *)(lVar8 + 0x28) + 0x10);
        uVar15 = *(undefined8 *)OVRPlugin_Vector3f___TypeInfo;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar15 = FUN_059324dc(uVar15,0);
        uVar6 = FUN_0593c20c(uVar14,uVar15,0);
        if ((uVar6 & 1) != 0) {
          if (*(long *)(lVar8 + 0x28) == 0) goto LAB_0625d930;
          uVar14 = *(undefined8 *)(*(long *)(lVar8 + 0x28) + 0x10);
          uVar15 = *(undefined8 *)PTR_DAT_07284e10;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          uVar15 = FUN_059324dc(uVar15,0);
          uVar6 = FUN_0593c20c(uVar14,uVar15,0);
          puVar2 = OVRPlugin_Vector4f___TypeInfo;
          if ((uVar6 & 1) != 0) {
            thunk_FUN_032e1da0(OVRPlugin_Vector4f___TypeInfo);
            FUN_02d9d3e0();
            lVar7 = thunk_FUN_032e1da0(puVar2);
            uVar15 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
            FUN_02d9d3f0();
            lVar7 = *(long *)(unaff_x19 + 0x58);
            FUN_02d9d3f0(lVar7);
            uVar14 = *(undefined8 *)(lVar7 + 0x30);
            FUN_02d9d3f0(lVar8);
            uVar13 = *(undefined8 *)(lVar8 + 0x10);
            FUN_02d9d3f0(lVar8);
            lVar8 = *(long *)(lVar8 + 0x28);
            FUN_02d9d3f0(lVar8);
            uVar14 = FUN_057ab660(uVar15,uVar14,uVar13,*(undefined8 *)(lVar8 + 0x30),0);
LAB_0625d9c8:
            thunk_FUN_032e1da0(PTR_DAT_07279578);
            uVar15 = thunk_FUN_032a56a0();
            FUN_0592371c(uVar15,uVar14,0);
            uVar14 = thunk_FUN_032e1da0(OVRPlugin_VirtualKeyboardModelAnimationState___TypeInfo);
                    /* WARNING: Subroutine does not return */
            FUN_032d5dbc(uVar15,uVar14);
          }
        }
      }
    }
  }
  return;
}


