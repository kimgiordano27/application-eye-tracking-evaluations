/*
FUNCTION_NAME: System.Action<OVRPassthroughLayer.SerializedSurfaceGeometry>$$Invoke
ENTRY_POINT: 02a83dd4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x02a84880) */
/* WARNING: Removing unreachable block (ram,0x02a84820) */

void System_Action<OVRPassthroughLayer_SerializedSurfaceGeometry>__Invoke(undefined8 param_1)

{
  ushort uVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  int iVar13;
  long unaff_x21;
  size_t unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  void *unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  FUN_02984264(param_1,**(undefined8 **)(unaff_x29 + -0x50));
  *(undefined4 *)(unaff_x29 + -0x3c) = 0;
  puVar2 = Method_System_Linq_Enumerable_ToDictionary<MemberInfo,_string,_MemberInfo>__;
  if (0 < *(long *)(unaff_x29 + -0x30)) {
    do {
      lVar9 = *unaff_x19;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
            puVar4 = (undefined8 *)(lVar9 + (long)(*piVar12 + 0x10) * 0x10 + 0x138);
            goto LAB_02a83e60;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02a83e60:
      cVar3 = (*(code *)*puVar4)();
      lVar9 = *unaff_x19;
      uVar1 = *(ushort *)(lVar9 + 0x12e);
      uVar11 = (ulong)uVar1;
      if (cVar3 == '\r') {
        if (uVar1 == 0) goto LAB_02a844bc;
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_02a844a4;
      }
      if (uVar1 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
            puVar4 = (undefined8 *)(lVar9 + (long)(*piVar12 + 0xb) * 0x10 + 0x138);
            goto LAB_02a83ed4;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02a83ed4:
      (*(code *)*puVar4)();
      lVar9 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01ecaf44();
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar9 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01ecaf44();
      }
      plVar7 = *(long **)(*(long *)(lVar9 + 0xb8) + 0x10);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar9 = *plVar7;
      *(long **)(unaff_x29 + -0x18) = unaff_x19;
      *(undefined8 **)(unaff_x29 + -0x10) = unaff_x25;
      lVar9 = *(long *)(lVar9 + 0x1a0);
      (**(code **)(lVar9 + 0x10))(*(undefined8 *)(lVar9 + 8),lVar9,plVar7,unaff_x29 + -0x18);
      memcpy(unaff_x27,unaff_x25,unaff_x23);
      lVar9 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01ecaf44();
      }
      plVar7 = *(long **)(*(long *)(lVar9 + 0xb8) + 0x18);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar9 = *plVar7;
      *(long **)(unaff_x29 + -0x18) = unaff_x19;
      *(undefined8 **)(unaff_x29 + -0x10) = unaff_x26;
      lVar9 = *(long *)(lVar9 + 0x1a0);
      (**(code **)(lVar9 + 0x10))(*(undefined8 *)(lVar9 + 8),lVar9,plVar7,unaff_x29 + -0x18);
      memcpy(unaff_x28,unaff_x26,*(size_t *)(unaff_x29 + -0x48));
      lVar9 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01ecaf44();
      }
      if (**(char **)(lVar9 + 0xb8) == '\0') {
        memcpy(unaff_x25,unaff_x27,unaff_x23);
        uVar11 = FUN_01f089f8(*(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xa0))
        ;
        if ((uVar11 & 1) != 0) goto LAB_02a83ff4;
        lVar9 = *unaff_x19;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
              puVar4 = (undefined8 *)(lVar9 + (long)(*piVar12 + 8) * 0x10 + 0x138);
              goto LAB_02a841c8;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02a841c8:
        lVar9 = (*(code *)*puVar4)();
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar9 = FUN_0390b368(lVar9,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar9 = FUN_0390b70c(lVar9,0);
        uVar5 = **(undefined8 **)(*(long *)(unaff_x21 + 0x20) + 0xc0);
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c();
        }
        plVar7 = (long *)FUN_03579868(uVar5,0);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar5 = (**(code **)(*plVar7 + 0x2e8))(plVar7,*(undefined8 *)(*plVar7 + 0x2f0));
        uVar5 = FUN_0340ebc0(*(undefined8 *)
                              Method_System_Linq_Enumerable_ToDictionary<FieldInfo,_string,_Enum>__,
                             uVar5,*(undefined8 *)puVar2,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c(uVar5,uVar5);
        }
        FUN_0390b988(lVar9,uVar5,0);
        iVar13 = 0xc;
      }
      else {
LAB_02a83ff4:
        memcpy(unaff_x25,unaff_x27,unaff_x23);
        memcpy(unaff_x26,unaff_x28,*(size_t *)(unaff_x29 + -0x48));
        lVar9 = **(long **)(unaff_x29 + -0x50);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar10 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
        puVar4 = unaff_x25;
        if (-1 < *(int *)(*(long *)(lVar10 + 0xa0) + 0x28)) {
          puVar4 = (undefined8 *)*unaff_x25;
        }
        puVar8 = unaff_x26;
        if (-1 < *(int *)(*(long *)(lVar10 + 0xb0) + 0x28)) {
          puVar8 = (undefined8 *)*unaff_x26;
        }
        puVar6 = *(undefined8 **)(lVar10 + 0xc0);
        uVar5 = *puVar6;
        *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
        *(undefined8 **)(unaff_x29 + -0x10) = puVar8;
        (*(code *)puVar6[2])(uVar5,puVar6,lVar9,unaff_x29 + -0x18);
        iVar13 = 0xd;
      }
      lVar9 = *unaff_x19;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
            puVar4 = (undefined8 *)(lVar9 + (long)(*piVar12 + 0xc) * 0x10 + 0x138);
            goto LAB_02a840c8;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02a840c8:
      (*(code *)*puVar4)();
      if (iVar13 == 0xd) {
LAB_02a840ec:
        lVar9 = *unaff_x19;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
              puVar4 = (undefined8 *)(lVar9 + (long)(*piVar12 + 4) * 0x10 + 0x138);
              goto LAB_02a84144;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02a84144:
        uVar11 = (*(code *)*puVar4)();
        if ((uVar11 & 1) == 0) {
          lVar9 = *unaff_x19;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 == 0) goto LAB_02a84504;
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_02a844ec;
        }
      }
      else if (iVar13 != 0xc) {
        if (iVar13 == 0) goto LAB_02a840ec;
        goto LAB_02a8471c;
      }
      iVar13 = *(int *)(unaff_x29 + -0x3c) + 1;
      *(int *)(unaff_x29 + -0x3c) = iVar13;
    } while ((long)iVar13 < *(long *)(unaff_x29 + -0x30));
  }
  goto LAB_02a84714;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_02a844a4:
    if (*(long *)(piVar12 + -2) ==
        *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
      puVar4 = (undefined8 *)(lVar9 + (long)(*piVar12 + 8) * 0x10 + 0x138);
      goto LAB_02a8452c;
    }
  }
LAB_02a844bc:
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02a8452c:
  lVar9 = (*(code *)*puVar4)();
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar9 = FUN_0390b368(lVar9,0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar9 = FUN_0390b70c(lVar9,0);
  lVar10 = FUN_01f08890(*(undefined8 *)
                         Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                        ,5);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(int *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(lVar10 + 0x20) =
       *(undefined8 *)
        Method_Oculus_Platform_Samples_SimplePlatformSample_DataEntry_getEntitlementCallback__;
  thunk_FUN_01f51358();
  uVar5 = FUN_035683d0(unaff_x29 + -0x3c,0);
  if (*(uint *)(lVar10 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(lVar10 + 0x28) = uVar5;
  thunk_FUN_01f51358();
  if (*(uint *)(lVar10 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(lVar10 + 0x30) =
       *(undefined8 *)
        Method_Oculus_Platform_Samples_SimplePlatformSample_DataEntry_getFriendsCallback__;
  thunk_FUN_01f51358();
  uVar5 = FUN_0356965c(unaff_x29 + -0x30,0);
  if (*(uint *)(lVar10 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(lVar10 + 0x38) = uVar5;
  thunk_FUN_01f51358();
  if (*(uint *)(lVar10 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(lVar10 + 0x40) =
       *(undefined8 *)
        Method_Oculus_Platform_Samples_SimplePlatformSample_DataEntry_getUserCallback__;
  thunk_FUN_01f51358();
  uVar5 = FUN_0340efe8(lVar10,0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c(uVar5,uVar5);
  }
  FUN_0390b840(lVar9,uVar5,0);
  goto LAB_02a84714;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_02a844ec:
    if (*(long *)(piVar12 + -2) ==
        *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
      puVar4 = (undefined8 *)(lVar9 + (long)(*piVar12 + 8) * 0x10 + 0x138);
      goto LAB_02a8465c;
    }
  }
LAB_02a84504:
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02a8465c:
  lVar9 = (*(code *)*puVar4)();
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar9 = FUN_0390b368(lVar9,0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar9 = FUN_0390b70c(lVar9,0);
  lVar10 = *unaff_x19;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) ==
          *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
        puVar4 = (undefined8 *)(lVar10 + (long)(*piVar12 + 10) * 0x10 + 0x138);
        goto LAB_02a846dc;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02a846dc:
  uVar5 = (*(code *)*puVar4)();
  uVar5 = FUN_03405678(*(undefined8 *)
                        Method_Oculus_Platform_Samples_SimplePlatformSample_DataEntry_leaderboardGetCallback__
                       ,uVar5,0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c(uVar5,uVar5);
  }
  FUN_0390b840(lVar9,uVar5,0);
LAB_02a84714:
  iVar13 = 10;
LAB_02a8471c:
  lVar9 = *unaff_x19;
  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) ==
          *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
        puVar4 = (undefined8 *)(lVar9 + (long)(*piVar12 + 0xe) * 0x10 + 0x138);
        goto LAB_02a84774;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02a84774:
  (*(code *)*puVar4)();
  if (iVar13 == 0) {
    lVar9 = *unaff_x19;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
          puVar4 = (undefined8 *)(lVar9 + (long)(*piVar12 + 0x25) * 0x10 + 0x138);
          goto LAB_02a847e0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02a847e0:
    (*(code *)*puVar4)();
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x58) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


