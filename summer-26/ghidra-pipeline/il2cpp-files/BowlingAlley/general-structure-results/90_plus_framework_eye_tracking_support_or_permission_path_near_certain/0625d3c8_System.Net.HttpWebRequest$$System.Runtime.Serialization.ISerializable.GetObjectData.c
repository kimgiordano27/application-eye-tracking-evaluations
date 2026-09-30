/*
FUNCTION_NAME: System.Net.HttpWebRequest$$System.Runtime.Serialization.ISerializable.GetObjectData
ENTRY_POINT: 0625d3c8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 132
LABEL: framework_eye_tracking_support_or_permission_path_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_12;validity_or_gating_hits_14;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0625d50c) */
/* WARNING: Removing unreachable block (ram,0x0625d950) */

void System_Net_HttpWebRequest__System_Runtime_Serialization_ISerializable_GetObjectData
               (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong in_x9;
  int *in_x10;
  int *piVar10;
  long unaff_x19;
  long *unaff_x22;
  undefined8 uVar11;
  long unaff_x24;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 uVar12;
  long *unaff_x29;
  
  do {
    do {
      if (*(long *)(in_x10 + -2) == param_3) {
        puVar4 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
        goto System_Net_HttpWebRequest__GetObjectData;
      }
      in_x9 = in_x9 - 1;
      in_x10 = in_x10 + 4;
    } while (in_x9 != 0);
    do {
      puVar4 = (undefined8 *)FUN_032937ac();
System_Net_HttpWebRequest__GetObjectData:
      plVar5 = (long *)(*(code *)*puVar4)();
      if (plVar5 != (long *)0x0) {
        bVar1 = *(byte *)(*unaff_x29 + 0x130);
        if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x29)) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(plVar5);
        }
      }
      plVar5 = *(long **)(unaff_x19 + 0x70);
      uVar6 = FUN_0625c6cc();
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8(uVar6,uVar6);
      }
      (**(code **)(*plVar5 + 0x308))(plVar5,uVar6,*(undefined8 *)(*plVar5 + 0x310));
      lVar8 = *unaff_x26;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x27) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0625d3a0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_032937ac();
LAB_0625d3a0:
      uVar9 = (*(code *)*puVar4)();
      puVar2 = PTR_DAT_07279f60;
      if ((uVar9 & 1) == 0) {
        plVar5 = (long *)thunk_FUN_032a55a4();
        if (plVar5 == (long *)0x0) goto LAB_0625d4f4;
        lVar8 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 == 0) goto LAB_0625d4cc;
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_0625d4b4;
      }
      param_1 = *unaff_x26;
      param_3 = *unaff_x27;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_0625d4b4:
    if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
      puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto FUN_0625d4e8;
    }
  }
LAB_0625d4cc:
  puVar4 = (undefined8 *)FUN_032937ac(plVar5,*(long *)puVar2,0);
FUN_0625d4e8:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_0625d4f4:
  puVar2 = PTR_DAT_07282378;
  if (unaff_x22 == (long *)0x0) goto LAB_0625d930;
  uVar6 = (**(code **)(*unaff_x22 + 0x8b8))();
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*unaff_x29);
  }
  uVar9 = FUN_0593c20c(uVar6,0,0);
  if ((uVar9 & 1) == 0) {
LAB_0625d70c:
    FUN_06261490();
    if (unaff_x24 == 0) goto LAB_0625d930;
  }
  else {
    (**(code **)(*unaff_x22 + 0x8b8))();
    lVar8 = FUN_0625f964();
    if (lVar8 == 0) goto LAB_0625d930;
    plVar5 = *(long **)(lVar8 + 0x10);
    if (plVar5 == (long *)0x0) {
LAB_0625d5b0:
      plVar5 = (long *)0x0;
    }
    else {
      bVar1 = *(byte *)(*(long *)OVRPlugin_EyeGazeState___TypeInfo + 0x130);
      if (*(byte *)(*plVar5 + 0x130) < bVar1) goto LAB_0625d5b0;
      if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)OVRPlugin_EyeGazeState___TypeInfo) {
        plVar5 = (long *)0x0;
      }
    }
    uVar6 = (**(code **)(*unaff_x22 + 0x8b8))();
    uVar12 = *(undefined8 *)puVar2;
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*unaff_x29);
    }
    uVar12 = FUN_059324dc(uVar12,0);
    uVar9 = FUN_0593c20c(uVar6,uVar12,0);
    if ((uVar9 & 1) == 0) {
      FUN_06261374();
      if (plVar5 == (long *)0x0) goto LAB_0625d930;
    }
    else {
      *(long *)(unaff_x19 + 0x60) = lVar8;
      thunk_FUN_0333a630((long *)(unaff_x19 + 0x60),lVar8);
      if (plVar5 == (long *)0x0) goto LAB_0625d930;
      uVar9 = FUN_0627d0e4(plVar5,0);
      if ((uVar9 & 1) == 0) {
        if (unaff_x24 == 0) goto LAB_0625d930;
        *(undefined1 *)(unaff_x24 + 0x79) = 0;
      }
      FUN_06261374();
    }
    uVar9 = FUN_0627d0e4(plVar5,0);
    if ((uVar9 & 1) == 0) goto LAB_0625d70c;
    if (unaff_x24 == 0) goto LAB_0625d930;
    plVar5 = *(long **)(unaff_x24 + 0x18);
    if (plVar5 != (long *)0x0) {
      lVar8 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07280318) {
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_0625d6f8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_032937ac(plVar5,*(long *)PTR_DAT_07280318,1);
LAB_0625d6f8:
      iVar3 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      puVar2 = OVRPlugin_Vector4f___TypeInfo;
      if (iVar3 != 1) {
        thunk_FUN_032e1da0(OVRPlugin_Vector4f___TypeInfo);
        FUN_02d9d3e0();
        lVar8 = thunk_FUN_032e1da0(puVar2);
        uVar6 = **(undefined8 **)(lVar8 + 0xb8);
        FUN_02d9d3f0();
        lVar8 = *(long *)(unaff_x19 + 0x58);
        FUN_02d9d3f0(lVar8);
        uVar12 = *(undefined8 *)(lVar8 + 0x30);
        FUN_02d9d3f0();
        lVar8 = *(long *)(unaff_x19 + 0x60);
        FUN_02d9d3f0(lVar8);
        lVar8 = *(long *)(lVar8 + 0x58);
        FUN_02d9d3f0(lVar8);
        uVar6 = FUN_057ab61c(uVar6,uVar12,*(undefined8 *)(lVar8 + 0x30),0);
        goto LAB_0625d9c8;
      }
      goto LAB_0625d70c;
    }
    FUN_06261490();
  }
  if ((*(long *)(unaff_x24 + 0x68) != 0) && (uVar9 = FUN_0627d0e4(), (uVar9 & 1) == 0)) {
    lVar8 = *(long *)(unaff_x24 + 0x68);
    if ((lVar8 == 0) || (*(long *)(lVar8 + 0x28) == 0)) {
LAB_0625d930:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar6 = *(undefined8 *)(*(long *)(lVar8 + 0x28) + 0x10);
    uVar12 = *(undefined8 *)PTR_DAT_072813d0;
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar12 = FUN_059324dc(uVar12,0);
    uVar9 = FUN_0593c20c(uVar6,uVar12,0);
    if ((uVar9 & 1) != 0) {
      if (*(long *)(lVar8 + 0x28) == 0) goto LAB_0625d930;
      uVar6 = *(undefined8 *)(*(long *)(lVar8 + 0x28) + 0x10);
      uVar12 = *(undefined8 *)PTR_DAT_07281f68;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar12 = FUN_059324dc(uVar12,0);
      uVar9 = FUN_0593c20c(uVar6,uVar12,0);
      if ((uVar9 & 1) != 0) {
        if (*(long *)(lVar8 + 0x28) == 0) goto LAB_0625d930;
        uVar6 = *(undefined8 *)(*(long *)(lVar8 + 0x28) + 0x10);
        uVar12 = *(undefined8 *)OVRPlugin_Vector3f___TypeInfo;
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar12 = FUN_059324dc(uVar12,0);
        uVar9 = FUN_0593c20c(uVar6,uVar12,0);
        if ((uVar9 & 1) != 0) {
          if (*(long *)(lVar8 + 0x28) == 0) goto LAB_0625d930;
          uVar6 = *(undefined8 *)(*(long *)(lVar8 + 0x28) + 0x10);
          uVar12 = *(undefined8 *)PTR_DAT_07284e10;
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          uVar12 = FUN_059324dc(uVar12,0);
          uVar9 = FUN_0593c20c(uVar6,uVar12,0);
          puVar2 = OVRPlugin_Vector4f___TypeInfo;
          if ((uVar9 & 1) != 0) {
            thunk_FUN_032e1da0(OVRPlugin_Vector4f___TypeInfo);
            FUN_02d9d3e0();
            lVar7 = thunk_FUN_032e1da0(puVar2);
            uVar12 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
            FUN_02d9d3f0();
            lVar7 = *(long *)(unaff_x19 + 0x58);
            FUN_02d9d3f0(lVar7);
            uVar6 = *(undefined8 *)(lVar7 + 0x30);
            FUN_02d9d3f0(lVar8);
            uVar11 = *(undefined8 *)(lVar8 + 0x10);
            FUN_02d9d3f0(lVar8);
            lVar8 = *(long *)(lVar8 + 0x28);
            FUN_02d9d3f0(lVar8);
            uVar6 = FUN_057ab660(uVar12,uVar6,uVar11,*(undefined8 *)(lVar8 + 0x30),0);
LAB_0625d9c8:
            thunk_FUN_032e1da0(PTR_DAT_07279578);
            uVar12 = thunk_FUN_032a56a0();
            FUN_0592371c(uVar12,uVar6,0);
            uVar6 = thunk_FUN_032e1da0(OVRPlugin_VirtualKeyboardModelAnimationState___TypeInfo);
                    /* WARNING: Subroutine does not return */
            FUN_032d5dbc(uVar12,uVar6);
          }
        }
      }
    }
  }
  return;
}


