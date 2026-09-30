/*
FUNCTION_NAME: FUN_02579070
ENTRY_POINT: 02579070
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_10;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_02579070(undefined8 *param_1)

{
  undefined *puVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long *plVar9;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  
  lVar4 = (*(code *)*param_1)();
  lVar5 = thunk_FUN_00d62348(*unaff_x21);
  if ((lVar5 == 0) || (FUN_013df2bc(), lVar4 == 0)) goto LAB_02579238;
  FUN_013df780(lVar4,lVar5,*(undefined8 *)Obi_GraphColoring_<Colorize>d__10_TypeInfo);
  puVar1 = Method_OVRNativeList<OVRLocatable>_Dispose__;
  plVar9 = (long *)unaff_x19[9];
  if (plVar9 != (long *)0x0) {
    lVar4 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02579124;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724(plVar9,*unaff_x22,0);
LAB_02579124:
    lVar4 = (*(code *)*puVar6)(plVar9,puVar6[1]);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if ((lVar5 == 0) || (FUN_013df2bc(), lVar4 == 0)) goto LAB_02579238;
    FUN_013df780(lVar4,lVar5,
                 *(undefined8 *)
                  System_ComponentModel_TypeConverter_StandardValuesCollection_TypeInfo);
    puVar1 = Oculus_Platform_Models_SdkAccount_TypeInfo;
    plVar9 = (long *)unaff_x19[9];
    if (plVar9 == (long *)0x0) goto LAB_02579238;
    lVar4 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_025791dc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724(plVar9,*unaff_x22,1);
LAB_025791dc:
    lVar4 = (*(code *)*puVar6)(plVar9,puVar6[1]);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if ((lVar5 == 0) || (FUN_013df2bc(), lVar4 == 0)) goto LAB_02579238;
    FUN_013df780(lVar4,lVar5,
                 *(undefined8 *)
                  Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetBodyJointId__
                );
  }
  if (unaff_x19[6] == 0) {
LAB_02579238:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(int *)(unaff_x19[6] + 0x18) == 0) {
    FUN_010c3384();
    puVar1 = 
    Method_System_Collections_Generic_Dictionary<Collider,_XRInteractableSnapVolume>_TryGetValue__;
    if (unaff_x19[6] == 0) goto LAB_02579238;
    if (*(int *)(unaff_x19[6] + 0x18) == 0) {
      uVar3 = FUN_0268fd4c();
      uVar3 = FUN_015f6780(*(undefined8 *)puVar1,uVar3,0);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_00d32864(*unaff_x24);
      }
      FUN_0266185c(uVar3);
    }
  }
  puVar1 = Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<int>__ctor__;
  bVar2 = (**(code **)(*unaff_x19 + 0x188))();
  *(byte *)(unaff_x19 + 0xb) = bVar2 & 1;
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar4 == 0) goto LAB_02579238;
  FUN_0267ba9c(lVar4,0);
  unaff_x19[10] = lVar4;
  if (((char)unaff_x19[5] != '\0') && (plVar9 = (long *)unaff_x19[8], plVar9 != (long *)0x0)) {
    lVar4 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x23) {
          puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 5) * 0x10 + 0x138);
          goto LAB_02578f04;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724(plVar9,*unaff_x23,5);
LAB_02578f04:
    uVar7 = (*(code *)*puVar6)(plVar9,puVar6[1]);
    if ((uVar7 & 1) != 0) goto LAB_02578f84;
  }
  if (*(char *)((long)unaff_x19 + 0x29) == '\0') {
    return;
  }
  plVar9 = (long *)unaff_x19[9];
  if (plVar9 == (long *)0x0) {
    return;
  }
  lVar4 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar4 + 0x12a);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x22) {
        puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 6) * 0x10 + 0x138);
        goto LAB_02578f74;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar6 = (undefined8 *)FUN_00d59724(plVar9,*unaff_x22,6);
LAB_02578f74:
  uVar7 = (*(code *)*puVar6)(plVar9,puVar6[1]);
  if ((uVar7 & 1) == 0) {
    return;
  }
LAB_02578f84:
  (**(code **)(*unaff_x19 + 0x178))();
  return;
}


