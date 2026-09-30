/*
FUNCTION_NAME: System.Net.HttpWebRequest$$DoContinueDelegate
ENTRY_POINT: 0625d438
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 132
LABEL: framework_eye_tracking_support_or_permission_path_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_15;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0625d50c) */
/* WARNING: Removing unreachable block (ram,0x0625d950) */

void System_Net_HttpWebRequest__DoContinueDelegate(long *param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long in_x9;
  int *piVar9;
  long unaff_x19;
  long *unaff_x22;
  undefined8 uVar10;
  long unaff_x24;
  long *plVar11;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 uVar12;
  long *unaff_x29;
  
  while (in_x9 == param_3) {
    do {
      plVar11 = *(long **)(unaff_x19 + 0x70);
      uVar5 = FUN_0625c6cc();
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8(uVar5,uVar5);
      }
      (**(code **)(*plVar11 + 0x308))(plVar11,uVar5,*(undefined8 *)(*plVar11 + 0x310));
      lVar7 = *unaff_x26;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x27) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0625d3a0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_032937ac();
LAB_0625d3a0:
      uVar8 = (*(code *)*puVar4)();
      puVar2 = PTR_DAT_07279f60;
      if ((uVar8 & 1) == 0) {
        plVar11 = (long *)thunk_FUN_032a55a4();
        if (plVar11 == (long *)0x0) goto LAB_0625d4f4;
        lVar7 = *plVar11;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 == 0) goto LAB_0625d4cc;
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_0625d4b4;
      }
      lVar7 = *unaff_x26;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x27) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto System_Net_HttpWebRequest__GetObjectData;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_032937ac();
System_Net_HttpWebRequest__GetObjectData:
      param_1 = (long *)(*(code *)*puVar4)();
    } while (param_1 == (long *)0x0);
    param_3 = *unaff_x29;
    if (*(byte *)(*param_1 + 0x130) < *(byte *)(param_3 + 0x130)) break;
    in_x9 = *(long *)(*(long *)(*param_1 + 200) + (ulong)*(byte *)(param_3 + 0x130) * 8 + -8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d618c(param_1);
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_0625d4b4:
    if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
      puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto FUN_0625d4e8;
    }
  }
LAB_0625d4cc:
  puVar4 = (undefined8 *)FUN_032937ac(plVar11,*(long *)puVar2,0);
FUN_0625d4e8:
  (*(code *)*puVar4)(plVar11,puVar4[1]);
LAB_0625d4f4:
  puVar2 = PTR_DAT_07282378;
  if (unaff_x22 == (long *)0x0) goto LAB_0625d930;
  uVar5 = (**(code **)(*unaff_x22 + 0x8b8))();
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*unaff_x29);
  }
  uVar8 = FUN_0593c20c(uVar5,0,0);
  if ((uVar8 & 1) == 0) {
LAB_0625d70c:
    FUN_06261490();
    if (unaff_x24 == 0) goto LAB_0625d930;
  }
  else {
    (**(code **)(*unaff_x22 + 0x8b8))();
    lVar7 = FUN_0625f964();
    if (lVar7 == 0) goto LAB_0625d930;
    plVar11 = *(long **)(lVar7 + 0x10);
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
    uVar5 = (**(code **)(*unaff_x22 + 0x8b8))();
    uVar12 = *(undefined8 *)puVar2;
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*unaff_x29);
    }
    uVar12 = FUN_059324dc(uVar12,0);
    uVar8 = FUN_0593c20c(uVar5,uVar12,0);
    if ((uVar8 & 1) == 0) {
      FUN_06261374();
      if (plVar11 == (long *)0x0) goto LAB_0625d930;
    }
    else {
      *(long *)(unaff_x19 + 0x60) = lVar7;
      thunk_FUN_0333a630((long *)(unaff_x19 + 0x60),lVar7);
      if (plVar11 == (long *)0x0) goto LAB_0625d930;
      uVar8 = FUN_0627d0e4(plVar11,0);
      if ((uVar8 & 1) == 0) {
        if (unaff_x24 == 0) goto LAB_0625d930;
        *(undefined1 *)(unaff_x24 + 0x79) = 0;
      }
      FUN_06261374();
    }
    uVar8 = FUN_0627d0e4(plVar11,0);
    if ((uVar8 & 1) == 0) goto LAB_0625d70c;
    if (unaff_x24 == 0) goto LAB_0625d930;
    plVar11 = *(long **)(unaff_x24 + 0x18);
    if (plVar11 != (long *)0x0) {
      lVar7 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07280318) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_0625d6f8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_032937ac(plVar11,*(long *)PTR_DAT_07280318,1);
LAB_0625d6f8:
      iVar3 = (*(code *)*puVar4)(plVar11,puVar4[1]);
      puVar2 = OVRPlugin_Vector4f___TypeInfo;
      if (iVar3 != 1) {
        thunk_FUN_032e1da0(OVRPlugin_Vector4f___TypeInfo);
        FUN_02d9d3e0();
        lVar7 = thunk_FUN_032e1da0(puVar2);
        uVar5 = **(undefined8 **)(lVar7 + 0xb8);
        FUN_02d9d3f0();
        lVar7 = *(long *)(unaff_x19 + 0x58);
        FUN_02d9d3f0(lVar7);
        uVar12 = *(undefined8 *)(lVar7 + 0x30);
        FUN_02d9d3f0();
        lVar7 = *(long *)(unaff_x19 + 0x60);
        FUN_02d9d3f0(lVar7);
        lVar7 = *(long *)(lVar7 + 0x58);
        FUN_02d9d3f0(lVar7);
        uVar5 = FUN_057ab61c(uVar5,uVar12,*(undefined8 *)(lVar7 + 0x30),0);
        goto LAB_0625d9c8;
      }
      goto LAB_0625d70c;
    }
    FUN_06261490();
  }
  if ((*(long *)(unaff_x24 + 0x68) != 0) && (uVar8 = FUN_0627d0e4(), (uVar8 & 1) == 0)) {
    lVar7 = *(long *)(unaff_x24 + 0x68);
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0x28) == 0)) {
LAB_0625d930:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar7 + 0x28) + 0x10);
    uVar12 = *(undefined8 *)PTR_DAT_072813d0;
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar12 = FUN_059324dc(uVar12,0);
    uVar8 = FUN_0593c20c(uVar5,uVar12,0);
    if ((uVar8 & 1) != 0) {
      if (*(long *)(lVar7 + 0x28) == 0) goto LAB_0625d930;
      uVar5 = *(undefined8 *)(*(long *)(lVar7 + 0x28) + 0x10);
      uVar12 = *(undefined8 *)PTR_DAT_07281f68;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar12 = FUN_059324dc(uVar12,0);
      uVar8 = FUN_0593c20c(uVar5,uVar12,0);
      if ((uVar8 & 1) != 0) {
        if (*(long *)(lVar7 + 0x28) == 0) goto LAB_0625d930;
        uVar5 = *(undefined8 *)(*(long *)(lVar7 + 0x28) + 0x10);
        uVar12 = *(undefined8 *)OVRPlugin_Vector3f___TypeInfo;
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar12 = FUN_059324dc(uVar12,0);
        uVar8 = FUN_0593c20c(uVar5,uVar12,0);
        if ((uVar8 & 1) != 0) {
          if (*(long *)(lVar7 + 0x28) == 0) goto LAB_0625d930;
          uVar5 = *(undefined8 *)(*(long *)(lVar7 + 0x28) + 0x10);
          uVar12 = *(undefined8 *)PTR_DAT_07284e10;
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          uVar12 = FUN_059324dc(uVar12,0);
          uVar8 = FUN_0593c20c(uVar5,uVar12,0);
          puVar2 = OVRPlugin_Vector4f___TypeInfo;
          if ((uVar8 & 1) != 0) {
            thunk_FUN_032e1da0(OVRPlugin_Vector4f___TypeInfo);
            FUN_02d9d3e0();
            lVar6 = thunk_FUN_032e1da0(puVar2);
            uVar12 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 8);
            FUN_02d9d3f0();
            lVar6 = *(long *)(unaff_x19 + 0x58);
            FUN_02d9d3f0(lVar6);
            uVar5 = *(undefined8 *)(lVar6 + 0x30);
            FUN_02d9d3f0(lVar7);
            uVar10 = *(undefined8 *)(lVar7 + 0x10);
            FUN_02d9d3f0(lVar7);
            lVar7 = *(long *)(lVar7 + 0x28);
            FUN_02d9d3f0(lVar7);
            uVar5 = FUN_057ab660(uVar12,uVar5,uVar10,*(undefined8 *)(lVar7 + 0x30),0);
LAB_0625d9c8:
            thunk_FUN_032e1da0(PTR_DAT_07279578);
            uVar12 = thunk_FUN_032a56a0();
            FUN_0592371c(uVar12,uVar5,0);
            uVar5 = thunk_FUN_032e1da0(OVRPlugin_VirtualKeyboardModelAnimationState___TypeInfo);
                    /* WARNING: Subroutine does not return */
            FUN_032d5dbc(uVar12,uVar5);
          }
        }
      }
    }
  }
  return;
}


