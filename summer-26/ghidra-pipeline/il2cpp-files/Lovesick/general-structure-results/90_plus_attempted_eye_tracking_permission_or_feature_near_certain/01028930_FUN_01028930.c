/*
FUNCTION_NAME: FUN_01028930
ENTRY_POINT: 01028930
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8 FUN_01028930(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  undefined4 uVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  float local_4c;
  float local_48;
  float local_44;
  
  if ((DAT_03775ed4 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__);
    thunk_FUN_00d48444(StringLiteral_4747);
    thunk_FUN_00d48444(OVREyeGaze_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_12098);
    thunk_FUN_00d48444(StringLiteral_9378);
    DAT_03775ed4 = 1;
  }
  puVar4 = StringLiteral_12098;
  if (4 < *(uint *)(param_1 + 0x10)) {
    return 0;
  }
  lVar10 = *(long *)(param_1 + 0x20);
  switch(*(uint *)(param_1 + 0x10)) {
  case 0:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar10 == 0) goto LAB_01028e04;
    *(undefined1 *)(lVar10 + 0x48) = 0;
    puVar3 = Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__;
    puVar2 = OVREyeGaze_TypeInfo;
    bVar5 = FUN_01027dd4(lVar10,*(undefined4 *)(param_1 + 0x28));
    iVar1 = *(int *)(param_1 + 0x28);
    *(byte *)(param_1 + 0x2c) = bVar5 & 1;
    if (iVar1 == 0) {
      if (*(long *)(lVar10 + 0x68) == 0) goto LAB_01028e04;
      uVar6 = FUN_00fb7f54(*(long *)(lVar10 + 0x68),0);
      if ((uVar6 & 1) != 0) {
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (DAT_03774e19 == '\0') {
          thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__);
          DAT_03774e19 = '\x01';
        }
        lVar7 = *(long *)puVar3;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar7 = *(long *)puVar3;
        }
        if (((**(long **)(lVar7 + 0xb8) == 0) || (*(long *)(lVar10 + 0x68) == 0)) ||
           (*(long *)(lVar10 + 0x78) == 0)) goto LAB_01028e04;
        lVar7 = *(long *)(**(long **)(lVar7 + 0xb8) + 0xd8);
        uVar11 = *(undefined8 *)(*(long *)(lVar10 + 0x68) + 0x18);
        FUN_0269f578(*(long *)(lVar10 + 0x78),0);
        if (lVar7 == 0) goto LAB_01028e04;
        FUN_00fb7f74(lVar7,uVar11,0,0);
      }
      if (*(char *)(param_1 + 0x2c) != '\0') {
        if (*(long *)(lVar10 + 0x80) != 0) {
          FUN_02654548(*(long *)(lVar10 + 0x80),*(undefined8 *)(lVar10 + 0x90),0);
          if (*(long *)(lVar10 + 0xb0) != 0) {
            FUN_0132138c(*(long *)(lVar10 + 0xb0),*(undefined4 *)(lVar10 + 0x34),&local_48,
                         *(undefined8 *)puVar2);
            lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
            if (lVar10 != 0) {
              FUN_0268a094(0.5 / local_48,lVar10,0);
              *(long *)(param_1 + 0x18) = lVar10;
              uVar8 = 2;
              goto LAB_01028a5c;
            }
          }
        }
        goto LAB_01028e04;
      }
    }
    else if (iVar1 == 2) {
      if (*(long *)(lVar10 + 0x70) == 0) goto LAB_01028e04;
      uVar6 = FUN_00fb7f54(*(long *)(lVar10 + 0x70),0);
      if ((uVar6 & 1) != 0) {
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (DAT_03774e19 == '\0') {
          thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__);
          DAT_03774e19 = '\x01';
        }
        lVar7 = *(long *)puVar3;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar7 = *(long *)puVar3;
        }
        if (((**(long **)(lVar7 + 0xb8) == 0) || (*(long *)(lVar10 + 0x70) == 0)) ||
           (*(long *)(lVar10 + 0x78) == 0)) goto LAB_01028e04;
        lVar7 = *(long *)(**(long **)(lVar7 + 0xb8) + 0xd8);
        uVar11 = *(undefined8 *)(*(long *)(lVar10 + 0x70) + 0x18);
        FUN_0269f578(*(long *)(lVar10 + 0x78),0);
        if (lVar7 == 0) goto LAB_01028e04;
        FUN_00fb7f74(lVar7,uVar11,0,0);
      }
      if (*(char *)(param_1 + 0x2c) != '\0') {
        if (*(long *)(lVar10 + 0x80) == 0) goto LAB_01028e04;
        FUN_02654548(*(long *)(lVar10 + 0x80),*(undefined8 *)(lVar10 + 0x98),0);
        if (*(long *)(lVar10 + 0xb0) == 0) goto LAB_01028e04;
        FUN_0132138c(*(long *)(lVar10 + 0xb0),*(undefined4 *)(lVar10 + 0x34),&local_44,
                     *(undefined8 *)puVar2);
        lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
        if (lVar10 == 0) goto LAB_01028e04;
        FUN_0268a094(0.5 / local_44,lVar10,0);
        *(long *)(param_1 + 0x18) = lVar10;
        uVar8 = 3;
        goto LAB_01028a5c;
      }
    }
    else if (iVar1 == 1) {
      if (*(long *)(lVar10 + 0x60) == 0) goto LAB_01028e04;
      uVar6 = FUN_00fb7f54(*(long *)(lVar10 + 0x60),0);
      if ((uVar6 & 1) != 0) {
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (DAT_03774e19 == '\0') {
          thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__);
          DAT_03774e19 = '\x01';
        }
        lVar7 = *(long *)puVar3;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar7 = *(long *)puVar3;
        }
        if (((**(long **)(lVar7 + 0xb8) == 0) || (*(long *)(lVar10 + 0x60) == 0)) ||
           (*(long *)(lVar10 + 0x78) == 0)) goto LAB_01028e04;
        lVar7 = *(long *)(**(long **)(lVar7 + 0xb8) + 0xd8);
        uVar11 = *(undefined8 *)(*(long *)(lVar10 + 0x60) + 0x18);
        FUN_0269f578(*(long *)(lVar10 + 0x78),0);
        if (lVar7 == 0) goto LAB_01028e04;
        FUN_00fb7f74(lVar7,uVar11,0,0);
      }
      if (*(char *)(param_1 + 0x2c) != '\0') {
        if (*(long *)(lVar10 + 0x80) != 0) {
          FUN_02654548(*(long *)(lVar10 + 0x80),*(undefined8 *)(lVar10 + 0x88),0);
          if (*(long *)(lVar10 + 0xb0) != 0) {
            FUN_0132138c(*(long *)(lVar10 + 0xb0),*(undefined4 *)(lVar10 + 0x34),&local_4c,
                         *(undefined8 *)puVar2);
            lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
            if (lVar10 != 0) {
              FUN_0268a094(0.5 / local_4c,lVar10,0);
              *(long *)(param_1 + 0x18) = lVar10;
              *(undefined4 *)(param_1 + 0x10) = 1;
              return 1;
            }
          }
        }
        goto LAB_01028e04;
      }
    }
    break;
  default:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) goto LAB_01028e04;
    FUN_02654548(*(long *)(lVar10 + 0x80),*(undefined8 *)(lVar10 + 0xa0),0);
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar10 != 0) {
      FUN_0268ea48(DAT_028aa040,lVar10,*(undefined8 *)StringLiteral_9378,0);
      return 0;
    }
    goto LAB_01028e04;
  }
  if (*(char *)(param_1 + 0x2c) == '\0') {
    lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
    if (lVar10 != 0) {
      FUN_0268a094(0x3f800000,lVar10,0);
      uVar8 = 4;
      *(long *)(param_1 + 0x18) = lVar10;
LAB_01028a5c:
      *(undefined4 *)(param_1 + 0x10) = uVar8;
      return 1;
    }
  }
  else {
    *(undefined1 *)(lVar10 + 0x48) = 1;
    *(undefined4 *)(lVar10 + 0x28) = *(undefined4 *)(lVar10 + 0x24);
    if (*(long *)(lVar10 + 0x40) != 0) {
      uVar9 = *(uint *)(param_1 + 0x28);
      if (2 < uVar9) {
        uVar9 = 3;
      }
      FUN_00ac20f0(*(long *)(lVar10 + 0x40),uVar9,*(undefined8 *)StringLiteral_4747);
      FUN_01027ba8(lVar10);
      return 0;
    }
  }
LAB_01028e04:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


