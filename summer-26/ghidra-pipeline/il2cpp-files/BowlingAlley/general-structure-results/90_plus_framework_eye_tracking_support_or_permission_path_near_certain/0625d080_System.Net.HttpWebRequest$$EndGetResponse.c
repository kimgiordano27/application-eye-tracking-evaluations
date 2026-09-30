/*
FUNCTION_NAME: System.Net.HttpWebRequest$$EndGetResponse
ENTRY_POINT: 0625d080
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 127
LABEL: framework_eye_tracking_support_or_permission_path_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_18;weak_xr_or_state_hits_16;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0625d50c) */
/* WARNING: Removing unreachable block (ram,0x0625d950) */

void System_Net_HttpWebRequest__EndGetResponse(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int *piVar15;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  undefined8 uVar16;
  uint unaff_w23;
  long unaff_x24;
  ushort unaff_w25;
  ushort unaff_w27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  ushort uStack0000000000000010;
  undefined6 uStack0000000000000012;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  
code_r0x0625d080:
  uVar5 = FUN_046474a8(param_1,param_2);
  if ((unaff_w23 ^ ~uVar5 >> 0x1f) == 1) {
    thunk_FUN_032e1da0(PTR_DAT_07279578);
    uVar13 = thunk_FUN_032a56a0();
    uVar14 = thunk_FUN_032e1da0(OVRPlugin_Vector4s___TypeInfo);
    FUN_0592371c(uVar13,uVar14,0);
    uVar14 = thunk_FUN_032e1da0(OVRPlugin_VirtualKeyboardModelAnimationState___TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar13,uVar14);
  }
LAB_0625d040:
  uVar7 = FUN_052d44b4(&stack0x00000030,*unaff_x28);
  if ((uVar7 & 1) != 0) {
    if (in_stack_00000040 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar8 = FUN_06260884();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    in_stack_00000028 = FUN_0625a8d4();
    if ((unaff_w27 & 0xff) == 0) {
      unaff_w27 = 0;
      if ((in_stack_00000028 & 0xff) != 0) {
        uVar5 = FUN_046474a8(&stack0x00000028,*unaff_x29);
        uStack0000000000000010 = 0;
        FUN_04640ee0(&stack0x00000010,~uVar5 >> 0x1f,*(undefined8 *)PTR_DAT_07287818);
        unaff_w25 = uStack0000000000000010 >> 8;
        unaff_w23 = (uint)(unaff_w25 != 0);
        unaff_w27 = uStack0000000000000010;
      }
      goto LAB_0625d040;
    }
    if ((in_stack_00000028 & 0xff) == 0) goto LAB_0625d040;
    param_2 = *unaff_x29;
    param_1 = &stack0x00000028;
    goto code_r0x0625d080;
  }
  FUN_052d44b0(&stack0x00000030,*(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate___TypeInfo);
  puVar2 = OVRPlugin_Vector2f___TypeInfo;
  if (((unaff_w25 & 0xff) != 0) && ((unaff_w27 & 0xff) != 0)) {
    lVar8 = *(long *)OVRPlugin_Vector2f___TypeInfo;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar8 = *(long *)puVar2;
    }
    if (*(long *)(*(long *)(lVar8 + 0xb8) + 8) == 0) {
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar8 = *(long *)puVar2;
      }
      uVar14 = **(undefined8 **)(lVar8 + 0xb8);
      uVar13 = thunk_FUN_032a56a0(*(undefined8 *)OVRPlugin_FaceTrackingDataSource___TypeInfo);
      FUN_04eb489c(uVar13,uVar14,*(undefined8 *)OVRPlugin_TrackingConfidence___TypeInfo,0);
      puVar9 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *puVar9 = uVar13;
      thunk_FUN_0333a630(puVar9,uVar13);
    }
    System_Collections_Generic_List<HandGrabUtils_HandGrabInteractableData>__System_Collections_ICollection_get_IsSynchronized
              ();
  }
  FUN_041e3694(&stack0x00000010);
  puVar2 = PTR_DAT_07279510;
  in_stack_00000030 = CONCAT62(uStack0000000000000012,uStack0000000000000010);
  in_stack_00000038 = in_stack_00000018;
  in_stack_00000040 = in_stack_00000020;
  while (uVar7 = FUN_052d44b4(&stack0x00000030,*unaff_x28), lVar8 = in_stack_00000040,
        (uVar7 & 1) != 0) {
    FUN_06272714();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar10 = FUN_06260884(lVar8);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if (*(char *)(lVar10 + 0x58) == '\0') {
      uVar13 = *(undefined8 *)(lVar8 + 0x30);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar7 = FUN_0593c20c(uVar13,0,0);
      if ((uVar7 & 1) != 0) {
        uVar13 = *(undefined8 *)(lVar8 + 0x30);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar7 = FUN_0593c20c(uVar13);
        if ((uVar7 & 1) != 0) {
          lVar8 = FUN_0625f964();
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          uVar7 = FUN_0627a884(lVar8,0);
          if ((uVar7 & 1) != 0) {
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
  puVar9 = (undefined8 *)PTR_DAT_07282378;
  uVar13 = *(undefined8 *)PTR_DAT_07282378;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_059324dc(uVar13,0);
  uVar7 = FUN_0593b434();
  if (((uVar7 & 1) != 0) && (plVar11 = *(long **)(unaff_x21 + 0x20), plVar11 != (long *)0x0)) {
    plVar11 = (long *)(**(code **)(*plVar11 + 0x388))(plVar11,*(undefined8 *)(*plVar11 + 0x390));
    puVar4 = PTR_DAT_0727a180;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    do {
      lVar10 = *plVar11;
      lVar8 = *(long *)puVar4;
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 == 0) {
LAB_0625d384:
        puVar9 = (undefined8 *)FUN_032937ac(plVar11,lVar8,0);
      }
      else {
        piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        while (*(long *)(piVar15 + -2) != lVar8) {
          uVar7 = uVar7 - 1;
          piVar15 = piVar15 + 4;
          if (uVar7 == 0) goto LAB_0625d384;
        }
        puVar9 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
      }
      uVar7 = (*(code *)*puVar9)(plVar11,puVar9[1]);
      puVar3 = PTR_DAT_07279f60;
      if ((uVar7 & 1) == 0) {
        plVar11 = (long *)thunk_FUN_032a55a4(plVar11,*(undefined8 *)PTR_DAT_07279f60);
        puVar9 = (undefined8 *)PTR_DAT_07282378;
        if (plVar11 == (long *)0x0) break;
        lVar8 = *plVar11;
        uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar7 == 0) {
LAB_0625d4cc:
          puVar9 = (undefined8 *)FUN_032937ac(plVar11,*(long *)puVar3,0);
        }
        else {
          piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          while (*(long *)(piVar15 + -2) != *(long *)puVar3) {
            uVar7 = uVar7 - 1;
            piVar15 = piVar15 + 4;
            if (uVar7 == 0) goto LAB_0625d4cc;
          }
          puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
        }
        (*(code *)*puVar9)(plVar11,puVar9[1]);
        puVar9 = (undefined8 *)PTR_DAT_07282378;
        break;
      }
      lVar10 = *plVar11;
      lVar8 = *(long *)puVar4;
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 == 0) {
LAB_0625d3e0:
        puVar9 = (undefined8 *)FUN_032937ac(plVar11,lVar8,1);
      }
      else {
        piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        while (*(long *)(piVar15 + -2) != lVar8) {
          uVar7 = uVar7 - 1;
          piVar15 = piVar15 + 4;
          if (uVar7 == 0) goto LAB_0625d3e0;
        }
        puVar9 = (undefined8 *)(lVar10 + (long)(*piVar15 + 1) * 0x10 + 0x138);
      }
      plVar12 = (long *)(*(code *)*puVar9)(plVar11,puVar9[1]);
      if (plVar12 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
        if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(plVar12);
        }
      }
      plVar12 = *(long **)(unaff_x19 + 0x70);
      uVar13 = FUN_0625c6cc();
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8(uVar13,uVar13);
      }
      (**(code **)(*plVar12 + 0x308))(plVar12,uVar13,*(undefined8 *)(*plVar12 + 0x310));
    } while( true );
  }
  if (unaff_x22 == (long *)0x0) goto LAB_0625d930;
  uVar13 = (**(code **)(*unaff_x22 + 0x8b8))();
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar2);
  }
  uVar7 = FUN_0593c20c(uVar13,0,0);
  if ((uVar7 & 1) == 0) {
LAB_0625d70c:
    FUN_06261490();
    if (unaff_x24 == 0) goto LAB_0625d930;
  }
  else {
    (**(code **)(*unaff_x22 + 0x8b8))();
    lVar8 = FUN_0625f964();
    if (lVar8 == 0) goto LAB_0625d930;
    plVar11 = *(long **)(lVar8 + 0x10);
    if (plVar11 == (long *)0x0) {
LAB_0625d5b0:
      plVar11 = (long *)0x0;
    }
    else {
      bVar1 = *(byte *)(*(long *)OVRPlugin_EyeGazeState___TypeInfo + 0x130);
      if (*(byte *)(*plVar11 + 0x130) < bVar1) goto LAB_0625d5b0;
      if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)OVRPlugin_EyeGazeState___TypeInfo) {
        plVar11 = (long *)0x0;
      }
    }
    uVar13 = (**(code **)(*unaff_x22 + 0x8b8))();
    uVar14 = *puVar9;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*(long *)puVar2);
    }
    uVar14 = FUN_059324dc(uVar14,0);
    uVar7 = FUN_0593c20c(uVar13,uVar14,0);
    if ((uVar7 & 1) == 0) {
      FUN_06261374();
      if (plVar11 == (long *)0x0) goto LAB_0625d930;
    }
    else {
      *(long *)(unaff_x19 + 0x60) = lVar8;
      thunk_FUN_0333a630((long *)(unaff_x19 + 0x60),lVar8);
      if (plVar11 == (long *)0x0) goto LAB_0625d930;
      uVar7 = FUN_0627d0e4(plVar11,0);
      if ((uVar7 & 1) == 0) {
        if (unaff_x24 == 0) goto LAB_0625d930;
        *(undefined1 *)(unaff_x24 + 0x79) = 0;
      }
      FUN_06261374();
    }
    uVar7 = FUN_0627d0e4(plVar11,0);
    if ((uVar7 & 1) == 0) goto LAB_0625d70c;
    if (unaff_x24 == 0) goto LAB_0625d930;
    plVar11 = *(long **)(unaff_x24 + 0x18);
    if (plVar11 != (long *)0x0) {
      lVar8 = *plVar11;
      uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar7 == 0) {
LAB_0625d6c4:
        puVar9 = (undefined8 *)FUN_032937ac(plVar11,*(long *)PTR_DAT_07280318,1);
      }
      else {
        piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        while (*(long *)(piVar15 + -2) != *(long *)PTR_DAT_07280318) {
          uVar7 = uVar7 - 1;
          piVar15 = piVar15 + 4;
          if (uVar7 == 0) goto LAB_0625d6c4;
        }
        puVar9 = (undefined8 *)(lVar8 + (long)(*piVar15 + 1) * 0x10 + 0x138);
      }
      iVar6 = (*(code *)*puVar9)(plVar11,puVar9[1]);
      puVar4 = OVRPlugin_Vector4f___TypeInfo;
      if (iVar6 != 1) {
        thunk_FUN_032e1da0(OVRPlugin_Vector4f___TypeInfo);
        FUN_02d9d3e0();
        lVar8 = thunk_FUN_032e1da0(puVar4);
        uVar13 = **(undefined8 **)(lVar8 + 0xb8);
        FUN_02d9d3f0();
        lVar8 = *(long *)(unaff_x19 + 0x58);
        FUN_02d9d3f0(lVar8);
        uVar14 = *(undefined8 *)(lVar8 + 0x30);
        FUN_02d9d3f0();
        lVar8 = *(long *)(unaff_x19 + 0x60);
        FUN_02d9d3f0(lVar8);
        lVar8 = *(long *)(lVar8 + 0x58);
        FUN_02d9d3f0(lVar8);
        uVar13 = FUN_057ab61c(uVar13,uVar14,*(undefined8 *)(lVar8 + 0x30),0);
        goto LAB_0625d9c8;
      }
      goto LAB_0625d70c;
    }
    FUN_06261490();
  }
  if ((*(long *)(unaff_x24 + 0x68) != 0) && (uVar7 = FUN_0627d0e4(), (uVar7 & 1) == 0)) {
    lVar8 = *(long *)(unaff_x24 + 0x68);
    if ((lVar8 == 0) || (*(long *)(lVar8 + 0x28) == 0)) {
LAB_0625d930:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar8 + 0x28) + 0x10);
    uVar14 = *(undefined8 *)PTR_DAT_072813d0;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar14 = FUN_059324dc(uVar14,0);
    uVar7 = FUN_0593c20c(uVar13,uVar14,0);
    if ((uVar7 & 1) != 0) {
      if (*(long *)(lVar8 + 0x28) == 0) goto LAB_0625d930;
      uVar13 = *(undefined8 *)(*(long *)(lVar8 + 0x28) + 0x10);
      uVar14 = *(undefined8 *)PTR_DAT_07281f68;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar14 = FUN_059324dc(uVar14,0);
      uVar7 = FUN_0593c20c(uVar13,uVar14,0);
      if ((uVar7 & 1) != 0) {
        if (*(long *)(lVar8 + 0x28) == 0) goto LAB_0625d930;
        uVar13 = *(undefined8 *)(*(long *)(lVar8 + 0x28) + 0x10);
        uVar14 = *(undefined8 *)OVRPlugin_Vector3f___TypeInfo;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar14 = FUN_059324dc(uVar14,0);
        uVar7 = FUN_0593c20c(uVar13,uVar14,0);
        if ((uVar7 & 1) != 0) {
          if (*(long *)(lVar8 + 0x28) == 0) goto LAB_0625d930;
          uVar13 = *(undefined8 *)(*(long *)(lVar8 + 0x28) + 0x10);
          uVar14 = *(undefined8 *)PTR_DAT_07284e10;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          uVar14 = FUN_059324dc(uVar14,0);
          uVar7 = FUN_0593c20c(uVar13,uVar14,0);
          puVar2 = OVRPlugin_Vector4f___TypeInfo;
          if ((uVar7 & 1) != 0) {
            thunk_FUN_032e1da0(OVRPlugin_Vector4f___TypeInfo);
            FUN_02d9d3e0();
            lVar10 = thunk_FUN_032e1da0(puVar2);
            uVar14 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 8);
            FUN_02d9d3f0();
            lVar10 = *(long *)(unaff_x19 + 0x58);
            FUN_02d9d3f0(lVar10);
            uVar13 = *(undefined8 *)(lVar10 + 0x30);
            FUN_02d9d3f0(lVar8);
            uVar16 = *(undefined8 *)(lVar8 + 0x10);
            FUN_02d9d3f0(lVar8);
            lVar8 = *(long *)(lVar8 + 0x28);
            FUN_02d9d3f0(lVar8);
            uVar13 = FUN_057ab660(uVar14,uVar13,uVar16,*(undefined8 *)(lVar8 + 0x30),0);
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


