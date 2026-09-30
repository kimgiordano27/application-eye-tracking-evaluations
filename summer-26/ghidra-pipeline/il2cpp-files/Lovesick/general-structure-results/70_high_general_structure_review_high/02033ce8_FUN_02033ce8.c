/*
FUNCTION_NAME: FUN_02033ce8
ENTRY_POINT: 02033ce8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


long FUN_02033ce8(long param_1,uint param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 uVar10;
  
  if ((DAT_03780a0a & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_OVREnumerable_Enumerator<KeyValuePair<OVRAnchor,_Transform>>_get_Current__
                      );
    thunk_FUN_00d48444(System_IOSelectorJob_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f1320);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_TweenSettingsExtensions_OnUpdate<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerCaptureOutEvent>_TypeId__);
    thunk_FUN_00d48444(System_Uri_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_ExecuteInEditMode_var);
    thunk_FUN_00d48444(UnityEngine_Rendering_ColorParameter_TypeInfo);
    DAT_03780a0a = 1;
  }
  puVar4 = Method_OVREnumerable_Enumerator<KeyValuePair<OVRAnchor,_Transform>>_get_Current__;
  puVar3 = System_IOSelectorJob_TypeInfo;
  if (*(long *)(param_1 + 0x38) == 0) goto LAB_02034194;
  if (*(int *)(*(long *)(param_1 + 0x38) + 0x10) == *(int *)(param_1 + 0x40)) {
    uVar10 = thunk_FUN_00d48444(StringLiteral_9387);
    uVar10 = FUN_02033998(param_1,uVar10);
    uVar8 = thunk_FUN_00d48444(Method_System_Linq_Enumerable_ToArray<VoiceServiceRequest>__);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar10,uVar8);
  }
  uVar5 = FUN_020321f8(param_1);
  uVar9 = uVar5 & 0xffff;
  if (uVar9 < 0x5b) {
    if (uVar9 < 0x51) {
      uVar9 = uVar5 & 0xffff;
      if (uVar9 < 0x47) {
        if (1 < uVar9 - 0x41) {
          if (uVar9 != 0x44) {
LAB_02033f54:
            lVar7 = FUN_02034ff0(param_1,param_2 & 1);
            return lVar7;
          }
          *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
          if ((param_2 & 1) != 0) {
            return 0;
          }
          uVar9 = *(uint *)(param_1 + 0x80);
          if ((uVar9 >> 8 & 1) != 0) {
            lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
            puVar2 = (undefined8 *)PTR_DAT_033f1320;
            goto joined_r0x02034120;
          }
          lVar7 = *(long *)puVar4;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar7 = *(long *)puVar4;
          }
          uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x50);
          goto LAB_020340bc;
        }
      }
      else if (uVar9 != 0x47) {
        if (uVar9 != 0x50) goto LAB_02033f54;
LAB_02033e88:
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
        if ((param_2 & 1) != 0) {
          return 0;
        }
        lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
        if (lVar7 != 0) {
          FUN_020226b0(lVar7,0);
          uVar10 = FUN_02034888(param_1);
          FUN_02022c64(lVar7,uVar10,(uVar5 & 0xffff) != 0x70,*(uint *)(param_1 + 0x80) & 1,
                       *(undefined8 *)(param_1 + 0x38),0);
          uVar9 = *(uint *)(param_1 + 0x80);
          if ((uVar9 & 1) != 0) {
            FUN_02023184(lVar7,*(undefined8 *)(param_1 + 0x48),0);
            uVar9 = *(uint *)(param_1 + 0x80);
          }
          uVar10 = FUN_02024430(lVar7,0);
          lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
          if (lVar7 != 0) {
            FUN_017b46ec(lVar7,0);
            *(uint *)(lVar7 + 0x34) = uVar9;
            *(undefined4 *)(lVar7 + 0x10) = 0xb;
            *(undefined8 *)(lVar7 + 0x20) = uVar10;
            return lVar7;
          }
        }
        goto LAB_02034194;
      }
LAB_02033f3c:
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
      if ((param_2 & 1) != 0) {
        return 0;
      }
      uVar6 = FUN_02034f60(param_1,uVar5);
      uVar1 = *(undefined4 *)(param_1 + 0x80);
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      if (lVar7 != 0) {
        FUN_017b46ec(lVar7,0);
        *(undefined4 *)(lVar7 + 0x10) = uVar6;
        *(undefined4 *)(lVar7 + 0x34) = uVar1;
        return lVar7;
      }
      goto LAB_02034194;
    }
    uVar9 = uVar5 & 0xffff;
    if (uVar9 == 0x53) {
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
      if ((param_2 & 1) != 0) {
        return 0;
      }
      uVar9 = *(uint *)(param_1 + 0x80);
      if ((uVar9 >> 8 & 1) != 0) {
        lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        puVar2 = (undefined8 *)UnityEngine_Rendering_ColorParameter_TypeInfo;
joined_r0x02034120:
        if (lVar7 != 0) {
          uVar10 = *puVar2;
          goto LAB_02034164;
        }
        goto LAB_02034194;
      }
      lVar7 = *(long *)puVar4;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar7 = *(long *)puVar4;
      }
      uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x30);
    }
    else {
      if (uVar9 != 0x57) {
        if (uVar9 != 0x5a) goto LAB_02033f54;
        goto LAB_02033f3c;
      }
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
      if ((param_2 & 1) != 0) {
        return 0;
      }
      uVar9 = *(uint *)(param_1 + 0x80);
      if ((uVar9 >> 8 & 1) != 0) {
        lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        puVar2 = (undefined8 *)
                 Method_DG_Tweening_TweenSettingsExtensions_OnUpdate<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
        ;
        goto joined_r0x02034120;
      }
      lVar7 = *(long *)puVar4;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar7 = *(long *)puVar4;
      }
      uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x40);
    }
  }
  else if (uVar9 < 0x71) {
    uVar9 = uVar5 & 0xffff;
    if (uVar9 == 0x62) goto LAB_02033f3c;
    if (uVar9 != 100) {
      if (uVar9 != 0x70) goto LAB_02033f54;
      goto LAB_02033e88;
    }
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if ((param_2 & 1) != 0) {
      return 0;
    }
    uVar9 = *(uint *)(param_1 + 0x80);
    if ((uVar9 >> 8 & 1) != 0) {
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      puVar2 = (undefined8 *)UnityEngine_ExecuteInEditMode_var;
      goto joined_r0x02034120;
    }
    lVar7 = *(long *)puVar4;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar7 = *(long *)puVar4;
    }
    uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x48);
  }
  else {
    uVar9 = uVar5 & 0xffff;
    if (uVar9 == 0x73) {
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
      if ((param_2 & 1) != 0) {
        return 0;
      }
      uVar9 = *(uint *)(param_1 + 0x80);
      if ((uVar9 >> 8 & 1) != 0) {
        lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        puVar2 = (undefined8 *)
                 Method_UnityEngine_UIElements_EventBase<PointerCaptureOutEvent>_TypeId__;
        goto joined_r0x02034120;
      }
      lVar7 = *(long *)puVar4;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar7 = *(long *)puVar4;
      }
      uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x28);
    }
    else {
      if (uVar9 != 0x77) {
        if (uVar9 != 0x7a) goto LAB_02033f54;
        goto LAB_02033f3c;
      }
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
      if ((param_2 & 1) != 0) {
        return 0;
      }
      uVar9 = *(uint *)(param_1 + 0x80);
      if ((uVar9 >> 8 & 1) != 0) {
        lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        puVar2 = (undefined8 *)System_Uri_TypeInfo;
        goto joined_r0x02034120;
      }
      lVar7 = *(long *)puVar4;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar7 = *(long *)puVar4;
      }
      uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x38);
    }
  }
LAB_020340bc:
  lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
  if (lVar7 != 0) {
LAB_02034164:
    FUN_017b46ec(lVar7,0);
    *(uint *)(lVar7 + 0x34) = uVar9;
    *(undefined4 *)(lVar7 + 0x10) = 0xb;
    *(undefined8 *)(lVar7 + 0x20) = uVar10;
    return lVar7;
  }
LAB_02034194:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


