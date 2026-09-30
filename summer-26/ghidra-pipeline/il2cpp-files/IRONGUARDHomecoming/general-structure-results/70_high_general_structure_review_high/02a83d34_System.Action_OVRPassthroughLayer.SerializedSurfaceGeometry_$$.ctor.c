/*
FUNCTION_NAME: System.Action<OVRPassthroughLayer.SerializedSurfaceGeometry>$$.ctor
ENTRY_POINT: 02a83d34
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02a84880) */
/* WARNING: Removing unreachable block (ram,0x02a84820) */

void System_Action<OVRPassthroughLayer_SerializedSurfaceGeometry>___ctor(void)

{
  ushort uVar1;
  undefined *puVar2;
  char cVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  int iVar13;
  long unaff_x21;
  long unaff_x22;
  size_t unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  void *unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  lVar4 = thunk_FUN_01f116d0();
  if (lVar4 == 0) {
                    /* try { // try from 02a83d40 to 02b83d4f has its CatchHandler @ 02a83f98 */
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc();
  }
  **(long **)(unaff_x29 + -0x50) = lVar4;
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x68);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    FUN_01ecaf44(lVar4);
  }
  if (unaff_x22 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = thunk_FUN_01f116d0();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
  }
                    /* try { // try from 02a83dc8 to 02b83dd7 has its CatchHandler @ 02a83e5c */
  thunk_FUN_01f51358(*(undefined8 *)(unaff_x29 + -0x50),lVar4);
  if (*(long *)(unaff_x29 + -0x60) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_02984264(*(long *)(unaff_x29 + -0x60),**(undefined8 **)(unaff_x29 + -0x50));
  *(undefined4 *)(unaff_x29 + -0x3c) = 0;
  puVar2 = Method_System_Linq_Enumerable_ToDictionary<MemberInfo,_string,_MemberInfo>__;
  if (0 < *(long *)(unaff_x29 + -0x30)) {
    do {
      lVar4 = *unaff_x19;
      uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
            puVar5 = (undefined8 *)(lVar4 + (long)(*piVar12 + 0x10) * 0x10 + 0x138);
            goto LAB_02a83e60;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238();
LAB_02a83e60:
      cVar3 = (*(code *)*puVar5)();
      lVar4 = *unaff_x19;
      uVar1 = *(ushort *)(lVar4 + 0x12e);
      uVar11 = (ulong)uVar1;
      if (cVar3 == '\r') {
        if (uVar1 == 0) goto LAB_02a844bc;
        piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_02a844a4;
      }
      if (uVar1 != 0) {
        piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
            puVar5 = (undefined8 *)(lVar4 + (long)(*piVar12 + 0xb) * 0x10 + 0x138);
            goto LAB_02a83ed4;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238();
LAB_02a83ed4:
      (*(code *)*puVar5)();
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44();
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44();
      }
      plVar8 = *(long **)(*(long *)(lVar4 + 0xb8) + 0x10);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar4 = *plVar8;
      *(long **)(unaff_x29 + -0x18) = unaff_x19;
      *(undefined8 **)(unaff_x29 + -0x10) = unaff_x25;
      lVar4 = *(long *)(lVar4 + 0x1a0);
      (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar8,unaff_x29 + -0x18);
      memcpy(unaff_x27,unaff_x25,unaff_x23);
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44();
      }
      plVar8 = *(long **)(*(long *)(lVar4 + 0xb8) + 0x18);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar4 = *plVar8;
      *(long **)(unaff_x29 + -0x18) = unaff_x19;
      *(undefined8 **)(unaff_x29 + -0x10) = unaff_x26;
      lVar4 = *(long *)(lVar4 + 0x1a0);
      (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar8,unaff_x29 + -0x18);
      memcpy(unaff_x28,unaff_x26,*(size_t *)(unaff_x29 + -0x48));
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44();
      }
      if (**(char **)(lVar4 + 0xb8) == '\0') {
        memcpy(unaff_x25,unaff_x27,unaff_x23);
        uVar11 = FUN_01f089f8(*(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xa0))
        ;
        if ((uVar11 & 1) != 0) goto LAB_02a83ff4;
        lVar4 = *unaff_x19;
        uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
              puVar5 = (undefined8 *)(lVar4 + (long)(*piVar12 + 8) * 0x10 + 0x138);
              goto LAB_02a841c8;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238();
LAB_02a841c8:
        lVar4 = (*(code *)*puVar5)();
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar4 = FUN_0390b368(lVar4,0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar4 = FUN_0390b70c(lVar4,0);
        uVar6 = **(undefined8 **)(*(long *)(unaff_x21 + 0x20) + 0xc0);
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c();
        }
        plVar8 = (long *)FUN_03579868(uVar6,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar6 = (**(code **)(*plVar8 + 0x2e8))(plVar8,*(undefined8 *)(*plVar8 + 0x2f0));
        uVar6 = FUN_0340ebc0(*(undefined8 *)
                              Method_System_Linq_Enumerable_ToDictionary<FieldInfo,_string,_Enum>__,
                             uVar6,*(undefined8 *)puVar2,0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c(uVar6,uVar6);
        }
        FUN_0390b988(lVar4,uVar6,0);
        iVar13 = 0xc;
      }
      else {
LAB_02a83ff4:
        memcpy(unaff_x25,unaff_x27,unaff_x23);
        memcpy(unaff_x26,unaff_x28,*(size_t *)(unaff_x29 + -0x48));
        lVar4 = **(long **)(unaff_x29 + -0x50);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar10 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
        puVar5 = unaff_x25;
        if (-1 < *(int *)(*(long *)(lVar10 + 0xa0) + 0x28)) {
          puVar5 = (undefined8 *)*unaff_x25;
        }
        puVar9 = unaff_x26;
        if (-1 < *(int *)(*(long *)(lVar10 + 0xb0) + 0x28)) {
          puVar9 = (undefined8 *)*unaff_x26;
        }
        puVar7 = *(undefined8 **)(lVar10 + 0xc0);
        uVar6 = *puVar7;
        *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
        *(undefined8 **)(unaff_x29 + -0x10) = puVar9;
        (*(code *)puVar7[2])(uVar6,puVar7,lVar4,unaff_x29 + -0x18);
        iVar13 = 0xd;
      }
      lVar4 = *unaff_x19;
      uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
            puVar5 = (undefined8 *)(lVar4 + (long)(*piVar12 + 0xc) * 0x10 + 0x138);
            goto LAB_02a840c8;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238();
LAB_02a840c8:
      (*(code *)*puVar5)();
      if (iVar13 == 0xd) {
LAB_02a840ec:
        lVar4 = *unaff_x19;
        uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
              puVar5 = (undefined8 *)(lVar4 + (long)(*piVar12 + 4) * 0x10 + 0x138);
              goto LAB_02a84144;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238();
LAB_02a84144:
        uVar11 = (*(code *)*puVar5)();
        if ((uVar11 & 1) == 0) {
          lVar4 = *unaff_x19;
          uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar11 == 0) goto LAB_02a84504;
          piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
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
      puVar5 = (undefined8 *)(lVar4 + (long)(*piVar12 + 8) * 0x10 + 0x138);
      goto LAB_02a8452c;
    }
  }
LAB_02a844bc:
  puVar5 = (undefined8 *)FUN_01ecb238();
LAB_02a8452c:
  lVar4 = (*(code *)*puVar5)();
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = FUN_0390b368(lVar4,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = FUN_0390b70c(lVar4,0);
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
  uVar6 = FUN_035683d0(unaff_x29 + -0x3c,0);
  if (*(uint *)(lVar10 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(lVar10 + 0x28) = uVar6;
  thunk_FUN_01f51358();
  if (*(uint *)(lVar10 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(lVar10 + 0x30) =
       *(undefined8 *)
        Method_Oculus_Platform_Samples_SimplePlatformSample_DataEntry_getFriendsCallback__;
  thunk_FUN_01f51358();
  uVar6 = FUN_0356965c(unaff_x29 + -0x30,0);
  if (*(uint *)(lVar10 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(lVar10 + 0x38) = uVar6;
  thunk_FUN_01f51358();
  if (*(uint *)(lVar10 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(lVar10 + 0x40) =
       *(undefined8 *)
        Method_Oculus_Platform_Samples_SimplePlatformSample_DataEntry_getUserCallback__;
  thunk_FUN_01f51358();
  uVar6 = FUN_0340efe8(lVar10,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c(uVar6,uVar6);
  }
  FUN_0390b840(lVar4,uVar6,0);
  goto LAB_02a84714;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_02a844ec:
    if (*(long *)(piVar12 + -2) ==
        *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
      puVar5 = (undefined8 *)(lVar4 + (long)(*piVar12 + 8) * 0x10 + 0x138);
      goto LAB_02a8465c;
    }
  }
LAB_02a84504:
  puVar5 = (undefined8 *)FUN_01ecb238();
LAB_02a8465c:
  lVar4 = (*(code *)*puVar5)();
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = FUN_0390b368(lVar4,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = FUN_0390b70c(lVar4,0);
  lVar10 = *unaff_x19;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) ==
          *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
        puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 10) * 0x10 + 0x138);
        goto LAB_02a846dc;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ecb238();
LAB_02a846dc:
  uVar6 = (*(code *)*puVar5)();
  uVar6 = FUN_03405678(*(undefined8 *)
                        Method_Oculus_Platform_Samples_SimplePlatformSample_DataEntry_leaderboardGetCallback__
                       ,uVar6,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c(uVar6,uVar6);
  }
  FUN_0390b840(lVar4,uVar6,0);
LAB_02a84714:
  iVar13 = 10;
LAB_02a8471c:
  lVar4 = *unaff_x19;
  uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) ==
          *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
        puVar5 = (undefined8 *)(lVar4 + (long)(*piVar12 + 0xe) * 0x10 + 0x138);
        goto LAB_02a84774;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ecb238();
LAB_02a84774:
  (*(code *)*puVar5)();
  if (iVar13 == 0) {
    lVar4 = *unaff_x19;
    uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
          puVar5 = (undefined8 *)(lVar4 + (long)(*piVar12 + 0x25) * 0x10 + 0x138);
          goto LAB_02a847e0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238();
LAB_02a847e0:
    (*(code *)*puVar5)();
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x58) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


