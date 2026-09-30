/*
FUNCTION_NAME: FUN_0513c658
ENTRY_POINT: 0513c658
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0513ca8c) */

void FUN_0513c658(undefined8 param_1,long *param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  if ((DAT_076d3006 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07279f60);
    thunk_FUN_032e1da0(PTR_DAT_0727a180);
    thunk_FUN_032e1da0(PTR_DAT_07279510);
    DAT_076d3006 = 1;
  }
  if (param_2 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_032934b8(lVar7);
    }
    lVar8 = *param_2;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto 
          System_Array_EmptyInternalEnumerator<KeyValuePair<fsPortableReflection_AttributeQuery,_object>>__Dispose
          ;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_032937ac(param_2,lVar7,0);

    System_Array_EmptyInternalEnumerator<KeyValuePair<fsPortableReflection_AttributeQuery,_object>>__Dispose
    :
    uVar3 = (*(code *)*puVar4)(param_2,puVar4[1]);
  }
  FUN_0513c5ac(param_1,uVar3,param_3,**(undefined8 **)(*(long *)(param_4 + 0x20) + 0xc0));
  puVar2 = PTR_DAT_07279510;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_05935240(1,0);
  }
  uVar5 = thunk_FUN_032f70fc(param_2,0);
  uVar11 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x58);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar2);
  }
  uVar11 = FUN_059324dc(uVar11,0);
  uVar9 = FUN_0593b434(uVar5,uVar11,0);
  lVar7 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
  if ((uVar9 & 1) != 0) {
    lVar7 = *(long *)(lVar7 + 0x30);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_032934b8(lVar7);
    }
    if ((*(byte *)(*param_2 + 0x130) < *(byte *)(lVar7 + 0x130)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7)) {
                    /* WARNING: Subroutine does not return */
      FUN_032d618c(param_2);
    }
    uVar1 = *(uint *)(param_2 + 4);
    if ((int)uVar1 < 1) {
      return;
    }
    lVar7 = param_2[3];
    if (lVar7 != 0) {
      uVar9 = 0;
      puVar4 = (undefined8 *)(lVar7 + 0x30);
      do {
        if (*(uint *)(lVar7 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        if (-1 < *(int *)(puVar4 + -2)) {
          System_Array_EmptyInternalEnumerator<KeyValue<InternalType_131,_InternalType_164<InternalType_643>>>__System_Collections_IEnumerator_get_Current
                    (param_1,puVar4[-1],*puVar4,2,
                     *(undefined8 *)
                      (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) +
                                                    0x80) + 0x20) + 0xc0) + 0x110));
        }
        uVar9 = uVar9 + 1;
        puVar4 = puVar4 + 3;
      } while (uVar1 != uVar9);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  lVar7 = *(long *)(lVar7 + 0x88);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_032934b8(lVar7);
  }
  lVar8 = *param_2;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar7) {
        puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto 
        System_Array_EmptyInternalEnumerator<KeyValuePair<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>>__System_Collections_IEnumerator_Reset
        ;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_032937ac(param_2,lVar7,0);

  System_Array_EmptyInternalEnumerator<KeyValuePair<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>>__System_Collections_IEnumerator_Reset
  :
  plVar6 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
  puVar2 = PTR_DAT_0727a180;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  do {
    lVar7 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0513c930;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_032937ac(plVar6,*(long *)puVar2,0);
LAB_0513c930:
    uVar9 = (*(code *)*puVar4)(plVar6,puVar4[1]);
    if ((uVar9 & 1) == 0) break;
    lVar7 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_032934b8(lVar7);
    }
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0513c9a8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_032937ac(plVar6,lVar7,0);
LAB_0513c9a8:
    auVar12 = (*(code *)*puVar4)(plVar6,puVar4[1]);
    System_Array_EmptyInternalEnumerator<KeyValue<InternalType_131,_InternalType_164<InternalType_643>>>__System_Collections_IEnumerator_get_Current
              (param_1,auVar12._0_8_,auVar12._8_8_,2,
               *(undefined8 *)
                (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x80) +
                                    0x20) + 0xc0) + 0x110));
  } while( true );
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07279f60) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0513ca48;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_032937ac(plVar6,*(long *)PTR_DAT_07279f60,0);
LAB_0513ca48:
    (*(code *)*puVar4)(plVar6,puVar4[1]);
  }
  return;
}


