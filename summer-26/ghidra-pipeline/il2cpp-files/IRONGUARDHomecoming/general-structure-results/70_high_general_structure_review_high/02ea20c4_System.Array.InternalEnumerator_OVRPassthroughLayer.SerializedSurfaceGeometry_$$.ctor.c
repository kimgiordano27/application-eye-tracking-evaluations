/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$.ctor
ENTRY_POINT: 02ea20c4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02ea2510) */
/* WARNING: Removing unreachable block (ram,0x02ea247c) */
/* WARNING: Removing unreachable block (ram,0x02ea248c) */
/* WARNING: Removing unreachable block (ram,0x02ea2494) */
/* WARNING: Removing unreachable block (ram,0x02ea24bc) */
/* WARNING: Removing unreachable block (ram,0x02ea24a0) */
/* WARNING: Removing unreachable block (ram,0x02ea24ac) */
/* WARNING: Removing unreachable block (ram,0x02ea24cc) */

void System_Array_InternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>___ctor
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x29;
  
  do {
    if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *param_3;
    *(long **)(unaff_x29 + -0x20) = unaff_x19;
    *(undefined8 **)(unaff_x29 + -0x18) = unaff_x22;
    lVar6 = *(long *)(lVar6 + 0x1a0);
    (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,param_3,unaff_x29 + -0x20);
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    puVar7 = unaff_x22;
    if (-1 < *(int *)(*(long *)(lVar6 + 0x58) + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x22;
    }
    puVar5 = *(undefined8 **)(lVar6 + 0x60);
    uVar3 = *puVar5;
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    (*(code *)puVar5[2])(uVar3,puVar5,unaff_x23,unaff_x29 + -0x20,unaff_x29 + -0xc);
    lVar6 = *unaff_x19;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar7 = (undefined8 *)(lVar6 + (long)(*piVar9 + 4) * 0x10 + 0x138);
          goto LAB_02ea2174;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238();
LAB_02ea2174:
    uVar8 = (*(code *)*puVar7)();
    if ((uVar8 & 1) == 0) {
      lVar6 = *unaff_x19;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 == 0)
      goto 
      System_Array_InternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__System_Collections_IEnumerator_Reset
      ;
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    iVar1 = *(int *)(unaff_x29 + -0x34) + 1;
    *(int *)(unaff_x29 + -0x34) = iVar1;
    if (*(long *)(unaff_x29 + -0x30) <= (long)iVar1) goto LAB_02ea2410;
    lVar6 = *unaff_x19;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar7 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0x10) * 0x10 + 0x138);
          goto LAB_02ea2060;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238();
LAB_02ea2060:
    cVar2 = (*(code *)*puVar7)();
    if (cVar2 == '\r') {
      lVar6 = *unaff_x19;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 == 0) goto LAB_02ea21d0;
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      goto LAB_02ea21b8;
    }
    unaff_x23 = *unaff_x21;
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
    }
    param_3 = (long *)**(long **)(lVar6 + 0xb8);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *unaff_x26) {
      puVar7 = (undefined8 *)(lVar6 + (long)(*piVar9 + 8) * 0x10 + 0x138);
      goto FUN_02ea2360;
    }
  }

  System_Array_InternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__System_Collections_IEnumerator_Reset
  :
  puVar7 = (undefined8 *)FUN_01ecb238();
FUN_02ea2360:
  lVar6 = (*(code *)*puVar7)();
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = FUN_0390b368(lVar6,0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = FUN_0390b70c(lVar6,0);
  lVar4 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x26) {
        puVar7 = (undefined8 *)(lVar4 + (long)(*piVar9 + 10) * 0x10 + 0x138);
        goto LAB_02ea23d8;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar7 = (undefined8 *)FUN_01ecb238();
LAB_02ea23d8:
  uVar3 = (*(code *)*puVar7)();
  uVar3 = FUN_03405678(*(undefined8 *)
                        Method_Oculus_Platform_Samples_SimplePlatformSample_DataEntry_leaderboardGetCallback__
                       ,uVar3,0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c(uVar3,uVar3);
  }
  FUN_0390b840(lVar6,uVar3,0);
  goto LAB_02ea2410;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_02ea21b8:
    if (*(long *)(piVar9 + -2) == *unaff_x26) {
      puVar7 = (undefined8 *)(lVar6 + (long)(*piVar9 + 8) * 0x10 + 0x138);
      goto LAB_02ea2230;
    }
  }
LAB_02ea21d0:
  puVar7 = (undefined8 *)FUN_01ecb238();
LAB_02ea2230:
  lVar6 = (*(code *)*puVar7)();
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = FUN_0390b368(lVar6,0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = FUN_0390b70c(lVar6,0);
  lVar4 = FUN_01f08890(*(undefined8 *)
                        Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                       ,5);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(lVar4 + 0x20) =
       *(undefined8 *)
        Method_Oculus_Platform_Samples_SimplePlatformSample_DataEntry_getEntitlementCallback__;
  thunk_FUN_01f51358();
  uVar3 = FUN_035683d0(unaff_x29 + -0x34,0);
  if (*(uint *)(lVar4 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(lVar4 + 0x28) = uVar3;
  thunk_FUN_01f51358();
  if (*(uint *)(lVar4 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(lVar4 + 0x30) =
       *(undefined8 *)
        Method_Oculus_Platform_Samples_SimplePlatformSample_DataEntry_getFriendsCallback__;
  thunk_FUN_01f51358();
  uVar3 = FUN_0356965c(unaff_x29 + -0x30,0);
  if (*(uint *)(lVar4 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(lVar4 + 0x38) = uVar3;
  thunk_FUN_01f51358();
  if (*(uint *)(lVar4 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(lVar4 + 0x40) =
       *(undefined8 *)
        Method_Oculus_Platform_Samples_SimplePlatformSample_DataEntry_getUserCallback__;
  thunk_FUN_01f51358();
  uVar3 = FUN_0340efe8(lVar4,0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c(uVar3,uVar3);
  }
  FUN_0390b840(lVar6,uVar3,0);
LAB_02ea2410:
  lVar6 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x26) {
        puVar7 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
        goto LAB_02ea2468;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar7 = (undefined8 *)FUN_01ecb238();
LAB_02ea2468:
  (*(code *)*puVar7)();
  if (*(long *)(unaff_x25 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


