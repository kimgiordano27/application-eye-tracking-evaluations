/*
FUNCTION_NAME: System.Dynamic.Utils.TypeUtils$$GetBooleanOperator
ENTRY_POINT: 03551300
PROGRAM: gunraiders-libil2cpp.so
SCORE: 78
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_20;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Dynamic_Utils_TypeUtils__GetBooleanOperator
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  byte bVar2;
  short sVar3;
  undefined1 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  long unaff_x19;
  long *unaff_x20;
  ushort in_stack_00000008;
  undefined8 in_stack_00000038;
  
  System_Convert__ToSingle(*param_1,param_3,0);
  (**(code **)(*unaff_x20 + 0x218))();
  if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03550f20;
  uVar5 = FUN_03517d14(*(long *)(unaff_x19 + 0x20),0xca,0);
  if ((uVar5 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03550f20;
    plVar6 = (long *)FUN_03517228(*(long *)(unaff_x19 + 0x20),0xca,0);
    if ((plVar6 != (long *)0x0) && (*plVar6 != *(long *)PTR_DAT_0422fc38)) goto LAB_035517c4;
    if (unaff_x20[0x21] == 0) goto LAB_03550f20;
    FUN_0354a958(unaff_x20[0x21],plVar6);
    if (unaff_x20[0x21] == 0) goto LAB_03550f20;
    System_Convert__ToSingle
              (*(undefined8 *)
                Method_System_Nullable<JsonSerializerInternalReader_PropertyPresence>_GetValueOrDefault__
               ,*(undefined8 *)(unaff_x20[0x21] + 0x20),0);
    (**(code **)(*unaff_x20 + 0x218))();
  }
  if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03550f20;
  uVar5 = FUN_03517d14(*(long *)(unaff_x19 + 0x20),0xc0,0);
  if ((uVar5 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03550f20;
    plVar6 = (long *)FUN_03517228(*(long *)(unaff_x19 + 0x20),0xc0,0);
    if (plVar6 != (long *)0x0) {
      bVar2 = *(byte *)(*(long *)Method_Oculus_Platform_Message<RejoinDialogResult>_get_Data__ +
                       0x130);
      if ((*(byte *)(*plVar6 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)Method_Oculus_Platform_Message<RejoinDialogResult>_get_Data__))
      goto LAB_035517c4;
    }
    FUN_03551a24();
  }
  iVar1 = (int)unaff_x20[0x10];
  if (iVar1 == 2) {
    plVar6 = (long *)FUN_03520e50();
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)0x0;
    }
    else if (*plVar6 != *(long *)PTR_DAT_0422fc38) {
      plVar6 = (long *)0x0;
    }
    uVar5 = FUN_031532a8(plVar6,0);
    if ((uVar5 & 1) == 0) {
      unaff_x20[0x29] = (long)plVar6;
    }
    plVar6 = (long *)FUN_03520e50();
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)0x0;
    }
    else if (*plVar6 != *(long *)PTR_DAT_0422fc38) {
      plVar6 = (long *)0x0;
    }
    sVar3 = *(short *)((long)unaff_x20 + 100);
    unaff_x20[0xe] = (long)plVar6;
    if (sVar3 != 0) {
      if (*(int *)(*(long *)Method_System_Nullable<int>_ToString__ + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar7 = FUN_03551c84(plVar6,sVar3);
      unaff_x20[0xe] = lVar7;
    }
    if (((int)unaff_x20[7] == 2) &&
       (in_stack_00000038._4_2_ = *(ushort *)(unaff_x20 + 8), (in_stack_00000038._4_2_ & 0xff) != 0)
       ) {
      in_stack_00000008 = in_stack_00000038._4_2_;
      uVar8 = thunk_FUN_01c49334(*(undefined8 *)
                                  Method_System_Nullable<Addressables_MergeMode>_get_HasValue__,
                                 &stack0x00000008);
      System_Convert__ToSingle
                (*(undefined8 *)Method_System_Nullable<OVRPlugin_XrApi>__ctor__,uVar8,0);
      (**(code **)(*unaff_x20 + 0x218))();
      lVar7 = unaff_x20[2];
      in_stack_00000038._4_2_ = *(ushort *)(unaff_x20 + 8);
      uVar4 = System_Collections_ObjectModel_ReadOnlyCollection<GlyphPairAdjustmentRecord>__System_Collections_ICollection_get_IsSynchronized
                        ((long)&stack0x00000038 + 4,
                         *(undefined8 *)
                          Method_System_Nullable<ObjectCreationHandling>_get_HasValue__);
      if (lVar7 == 0) goto LAB_03550f20;
      *(undefined1 *)(lVar7 + 0x8c) = uVar4;
      in_stack_00000038._4_2_ = 0;
      *(undefined2 *)(unaff_x20 + 8) = 0;
    }
    FUN_0354c524();
  }
  else {
    if (iVar1 == 1) {
      lVar7 = unaff_x20[0x12];
      if ((int)lVar7 != 8) {
        lVar9 = unaff_x20[0x13];
        *(undefined4 *)(unaff_x20 + 0x12) = 8;
        if (lVar9 != 0) {
          (**(code **)(lVar9 + 0x18))
                    (*(undefined8 *)(lVar9 + 0x40),(int)lVar7,8,*(undefined8 *)(lVar9 + 0x28));
        }
      }
      lVar7 = unaff_x20[0x25];
      if (lVar7 == 0) goto LAB_03550f20;
      if (*(char *)(lVar7 + 0x31) == '\x03') {
        *(undefined8 *)(lVar7 + 0x28) = 0;
      }
      else {
        lVar9 = thunk_FUN_01c496e0(*(undefined8 *)System_Data_NameNode_var);
        FUN_0350971c(lVar9,0);
        if (unaff_x20[0x21] == 0) goto LAB_03550f20;
        uVar8 = *(undefined8 *)(unaff_x20[0x21] + 0x38);
        if (*(int *)(*(long *)Method_System_Nullable<Guid>__ctor__ + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_03548504(lVar9,uVar8);
        if (unaff_x20[0x21] == 0) goto LAB_03550f20;
        uVar5 = FUN_031532a8(*(undefined8 *)(unaff_x20[0x21] + 0x20),0);
        if ((uVar5 & 1) == 0) {
          if ((unaff_x20[0x21] == 0) || (lVar9 == 0)) goto LAB_03550f20;
          FUN_03509938(lVar9,0xff,*(undefined8 *)(unaff_x20[0x21] + 0x20),0);
        }
        lVar7 = unaff_x20[0x25];
        if (lVar7 == 0) goto LAB_03550f20;
        *(long *)(lVar7 + 0x28) = lVar9;
      }
      *(undefined1 *)(lVar7 + 0x30) = 1;
      if (*(int *)((long)unaff_x20 + 0x124) - 1U < 4) {
        plVar6 = (long *)unaff_x20[2];
        if (plVar6 == (long *)0x0) goto LAB_03550f20;
        pcVar10 = *(code **)(*plVar6 + 0x288);
        uVar8 = *(undefined8 *)(*plVar6 + 0x290);
      }
      else {
        if (*(int *)((long)unaff_x20 + 0x124) != 0) goto switchD_0355093c_caseD_da;
        plVar6 = (long *)unaff_x20[2];
        if (plVar6 == (long *)0x0) goto LAB_03550f20;
        pcVar10 = *(code **)(*plVar6 + 0x278);
        uVar8 = *(undefined8 *)(*plVar6 + 0x280);
      }
      (*pcVar10)(plVar6,lVar7,uVar8);
      goto switchD_0355093c_caseD_da;
    }
    if (iVar1 == 0) {
      lVar7 = unaff_x20[0x12];
      if ((int)lVar7 != 0xf) {
        lVar9 = unaff_x20[0x13];
        *(undefined4 *)(unaff_x20 + 0x12) = 0xf;
        if (lVar9 != 0) {
          (**(code **)(lVar9 + 0x18))
                    (*(undefined8 *)(lVar9 + 0x40),(int)lVar7,0xf,*(undefined8 *)(lVar9 + 0x28));
        }
      }
      if (unaff_x20[0x26] == 0) {
        if (unaff_x20[0x16] == 0) goto LAB_03550f20;
        FUN_03551dec();
      }
      else {
        FUN_03550078();
        unaff_x20[0x26] = 0;
      }
      if ((int)unaff_x20[7] != 0) {
        plVar6 = (long *)unaff_x20[2];
        if (plVar6 == (long *)0x0) goto LAB_03550f20;
        (**(code **)(*plVar6 + 0x328))
                  (plVar6,(char)unaff_x20[0x1f],*(undefined8 *)(*plVar6 + 0x330));
      }
    }
  }
  plVar6 = (long *)FUN_03520e50();
  if (plVar6 != (long *)0x0) {
    bVar2 = *(byte *)(*(long *)Newtonsoft_Json_Serialization_ObjectConstructor<object>_TypeInfo +
                     0x130);
    if ((*(byte *)(*plVar6 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)Newtonsoft_Json_Serialization_ObjectConstructor<object>_TypeInfo)) {
LAB_035517c4:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(plVar6);
    }
    if (unaff_x20[0x16] == 0) {
LAB_03550f20:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    FUN_03551fa8(unaff_x20[0x16],plVar6);
  }
switchD_0355093c_caseD_da:
  lVar7 = unaff_x20[0x15];
  if (lVar7 != 0) {
    (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40));
  }
  return;
}


