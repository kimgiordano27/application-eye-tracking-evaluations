/*
FUNCTION_NAME: Sirenix.Serialization.JsonDataWriter$$WritePrimitiveArray<byte>
ENTRY_POINT: 0226dc38
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_16;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0226dfe0) */

void Sirenix_Serialization_JsonDataWriter__WritePrimitiveArray<byte>
               (long *param_1,long *param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long *plVar12;
  ulong __n;
  undefined1 *__src;
  undefined1 *__dest;
  undefined1 *__s;
  uint uVar13;
  long unaff_x27;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(unaff_x27 + 0x28);
  lVar11 = *(long *)(param_3 + 0x38);
  if (lVar11 == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    lVar11 = *(long *)(param_3 + 0x38);
    if (lVar11 == 0) {
      FUN_01ecafa0(param_3);
      lVar11 = *(long *)(param_3 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(*(long *)(lVar11 + 0x48) + 0xfc);
  uVar9 = __n + 0xf & 0x1fffffff0;
  __src = &stack0x00000000 + -uVar9;
  __dest = __src + -uVar9;
  __s = __dest + -uVar9;
  memset(__s,0,__n);
  if (*param_1 != 0) {
    iVar3 = *(int *)(*param_1 + 0x18);
    iVar4 = (*(code *)**(undefined8 **)(lVar11 + 0x20))(param_2);
    lVar11 = *(long *)(param_3 + 0x38);
    *(int *)(unaff_x29 + -0x14) = iVar3;
    (*(code *)**(undefined8 **)(lVar11 + 0x28))(param_1,iVar4 + iVar3);
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar11 = *(long *)(*(long *)(param_3 + 0x38) + 8);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_01ecaf44(lVar11);
    }
    lVar8 = *param_2;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar11) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0226dd8c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(param_2,lVar11,0);
LAB_0226dd8c:
    pcVar1 = (code *)*puVar6;
    uVar2 = puVar6[1];
    *(long *)(unaff_x29 + -0x20) = unaff_x27;
    plVar7 = (long *)(*pcVar1)(param_2,uVar2);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar13 = *(uint *)(unaff_x29 + -0x14);
    do {
      lVar11 = *plVar7;
      uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0226ddfc;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(plVar7,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                            ,0);
LAB_0226ddfc:
      uVar9 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar9 & 1) == 0) {
        unaff_x27 = *(long *)(unaff_x29 + -0x20);
        if (plVar7 == (long *)0x0) goto LAB_0226df94;
        lVar11 = *plVar7;
        uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar9 == 0) goto LAB_0226df6c;
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_0226df54;
      }
      lVar11 = *(long *)(*(long *)(param_3 + 0x38) + 0x38);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_01ecaf44(lVar11);
      }
      lVar8 = *plVar7;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar11) {
            lVar11 = lVar8 + (long)*piVar10 * 0x10 + 0x138;
            goto LAB_0226de70;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      lVar11 = FUN_01ecb238(plVar7,lVar11,0);
LAB_0226de70:
      *(undefined1 **)(unaff_x29 + -0x10) = __src;
      lVar11 = *(long *)(lVar11 + 8);
      (**(code **)(lVar11 + 0x10))
                (*(undefined8 *)(lVar11 + 8),lVar11,plVar7,unaff_x29 + -0x10,__src);
      memcpy(__s,__src,__n);
      plVar12 = (long *)*param_1;
      memcpy(__dest,__s,__n);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(uint *)(plVar12 + 3) <= uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar8 = (long)(int)uVar13;
      memcpy((void *)((long)plVar12 + (ulong)*(uint *)(*plVar12 + 0x104) * lVar8 + 0x20),__dest,__n)
      ;
      lVar11 = *(long *)(*(long *)(param_3 + 0x38) + 0x48);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_01ecaf44();
      }
      if (*(uint *)(plVar12 + 3) <= uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      uVar13 = uVar13 + 1;
      FUN_01f087b0(lVar11,(long)plVar12 + (ulong)*(uint *)(*plVar12 + 0x104) * lVar8 + 0x20,__dest);
    } while( true );
  }
  lVar11 = (*(code *)**(undefined8 **)(lVar11 + 0x10))(param_2);
  *param_1 = lVar11;
  thunk_FUN_01f51358(param_1,lVar11);
  uVar5 = 0;
  goto LAB_0226df9c;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_0226df54:
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0226df88;
    }
  }
LAB_0226df6c:
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0226df88:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
LAB_0226df94:
  uVar5 = *(undefined4 *)(unaff_x29 + -0x14);
LAB_0226df9c:
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


