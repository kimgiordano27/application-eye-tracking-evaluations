/*
FUNCTION_NAME: FUN_041db6bc
ENTRY_POINT: 041db6bc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_21;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x041dbcc0) */

void FUN_041db6bc(long param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  if ((DAT_04840ee6 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_System_DateTimeOffset_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_0458b678);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_First<object>__);
    thunk_FUN_01efb3a4(PTR_DAT_0458b680);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_First<SerializationOperation>__);
    thunk_FUN_01efb3a4(PTR_DAT_0458f338);
    thunk_FUN_01efb3a4(PTR_DAT_0458f330);
    thunk_FUN_01efb3a4(PTR_DAT_0458b658);
    DAT_04840ee6 = 1;
  }
  puVar1 = 
  Method_System_DateTimeOffset_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization__
  ;
  if ((*(ushort *)(param_1 + 0x88) < 0x21) &&
     ((1L << ((ulong)*(ushort *)(param_1 + 0x88) & 0x3f) & 0x100000408U) != 0)) {
    plVar2 = (long *)FUN_0332283c(1,*(undefined4 *)(param_1 + 0x84),*(undefined8 *)PTR_DAT_0458f330)
    ;
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_041d4560(plVar2,*(undefined8 *)(param_1 + 0x48));
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *param_2;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_041db878;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(param_2,*(long *)puVar1,0);
LAB_041db878:
    plVar4 = (long *)(*(code *)*puVar3)(param_2,puVar3[1]);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar4 + 0x198))(plVar4,plVar2,*(undefined8 *)(*plVar4 + 0x1a0));
    if (plVar2 == (long *)0x0) {
      return;
    }
    lVar7 = *plVar2;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    lVar6 = *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar6) goto LAB_041dbc90;
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
  }
  else if (*(int *)(param_1 + 0x8c) == 0x1b) {
    plVar2 = (long *)FUN_0332283c(1,*(undefined4 *)(param_1 + 0x84),*(undefined8 *)PTR_DAT_0458f338)
    ;
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_041d4560(plVar2,*(undefined8 *)(param_1 + 0x48));
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *param_2;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_041dba0c;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(param_2,*(long *)puVar1,0);
LAB_041dba0c:
    plVar4 = (long *)(*(code *)*puVar3)(param_2,puVar3[1]);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar4 + 0x198))(plVar4,plVar2,*(undefined8 *)(*plVar4 + 0x1a0));
    if (plVar2 == (long *)0x0) {
      return;
    }
    lVar7 = *plVar2;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    lVar6 = *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar6) goto LAB_041dbc90;
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
  }
  else {
    uVar9 = FUN_041dbfa4(param_1);
    if ((uVar9 & 1) == 0) {
      switch(*(undefined4 *)(param_1 + 0x8c)) {
      case 0x111:
        if (DAT_0482f040 == '\0') {
          thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<float4>_Dispose__);
          DAT_0482f040 = '\x01';
        }
        puVar8 = (undefined4 *)
                 (*(long *)(*(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__ + 0xb8)
                 + 0x10);
        puVar10 = (undefined4 *)
                  (*(long *)(*(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__ + 0xb8)
                  + 0x14);
        break;
      case 0x112:
        if (DAT_04838077 == '\0') {
          thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<float4>_Dispose__);
          DAT_04838077 = '\x01';
        }
        puVar8 = (undefined4 *)
                 (*(long *)(*(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__ + 0xb8)
                 + 0x18);
        puVar10 = (undefined4 *)
                  (*(long *)(*(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__ + 0xb8)
                  + 0x1c);
        break;
      case 0x113:
        if (DAT_0482fcb6 == '\0') {
          thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<float4>_Dispose__);
          DAT_0482fcb6 = '\x01';
        }
        puVar8 = (undefined4 *)
                 (*(long *)(*(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__ + 0xb8)
                 + 0x28);
        puVar10 = (undefined4 *)
                  (*(long *)(*(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__ + 0xb8)
                  + 0x2c);
        break;
      case 0x114:
        if (DAT_0483807e == '\0') {
          thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<float4>_Dispose__);
          DAT_0483807e = '\x01';
        }
        puVar8 = (undefined4 *)
                 (*(long *)(*(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__ + 0xb8)
                 + 0x20);
        puVar10 = (undefined4 *)
                  (*(long *)(*(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__ + 0xb8)
                  + 0x24);
        break;
      default:
        return;
      }
      uVar12 = *puVar10;
      uVar13 = *puVar8;
      uVar5 = *(undefined4 *)(param_1 + 0x84);
      if (*(int *)(*(long *)PTR_DAT_0458b658 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      plVar2 = (long *)FUN_041dc138(uVar13,uVar12,1,uVar5);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_041d4560(plVar2,*(undefined8 *)(param_1 + 0x48));
      if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar6 = *param_2;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_041dbc2c;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(param_2,*(long *)puVar1,0);
LAB_041dbc2c:
      plVar4 = (long *)(*(code *)*puVar3)(param_2,puVar3[1]);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      (**(code **)(*plVar4 + 0x198))(plVar4,plVar2,*(undefined8 *)(*plVar4 + 0x1a0));
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar2;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      lVar6 = *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar6) goto LAB_041dbc90;
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
    }
    else {
      uVar9 = System_Collections_Generic_ArraySortHelper<DOTweenTMPAnimator_CharTransform>___ctor
                        (param_1,*(undefined8 *)
                                  Method_System_Linq_Enumerable_First<SerializationOperation>__);
      uVar12 = *(undefined4 *)(param_1 + 0x84);
      uVar5 = 5;
      if ((uVar9 & 1) != 0) {
        uVar5 = 6;
      }
      if (*(int *)(*(long *)PTR_DAT_0458b658 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      plVar2 = (long *)FUN_041dc08c(uVar5,1,uVar12);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_041d4560(plVar2,*(undefined8 *)(param_1 + 0x48));
      if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar6 = *param_2;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_041dba7c;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(param_2,*(long *)puVar1,0);
LAB_041dba7c:
      plVar4 = (long *)(*(code *)*puVar3)(param_2,puVar3[1]);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      (**(code **)(*plVar4 + 0x198))(plVar4,plVar2,*(undefined8 *)(*plVar4 + 0x1a0));
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar2;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      lVar6 = *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar6) goto LAB_041dbc90;
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
    }
  }
  puVar3 = (undefined8 *)FUN_01ecb238(plVar2,lVar6,0);
LAB_041dbc9c:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
LAB_041dbc90:
  puVar3 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
  goto LAB_041dbc9c;
}


