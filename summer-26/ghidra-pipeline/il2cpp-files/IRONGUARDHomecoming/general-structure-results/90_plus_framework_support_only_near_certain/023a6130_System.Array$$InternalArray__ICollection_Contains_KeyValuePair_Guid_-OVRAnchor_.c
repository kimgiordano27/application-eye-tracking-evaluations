/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<KeyValuePair<Guid,-OVRAnchor>>
ENTRY_POINT: 023a6130
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_11;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_10
*/


/* WARNING: Removing unreachable block (ram,0x023a6950) */
/* WARNING: Removing unreachable block (ram,0x023a6c48) */
/* WARNING: Removing unreachable block (ram,0x023a6eb8) */
/* WARNING: Removing unreachable block (ram,0x023a7088) */
/* WARNING: Removing unreachable block (ram,0x023a7200) */
/* WARNING: Removing unreachable block (ram,0x023a7250) */
/* WARNING: Removing unreachable block (ram,0x023a7248) */
/* WARNING: Removing unreachable block (ram,0x023a7180) */
/* WARNING: Removing unreachable block (ram,0x023a71f4) */

void System_Array__InternalArray__ICollection_Contains<KeyValuePair<Guid,_OVRAnchor>>(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long in_x9;
  ulong uVar14;
  int *piVar15;
  undefined8 unaff_x19;
  void *__src;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar16;
  void *__s;
  long unaff_x22;
  undefined8 unaff_x23;
  void *__s_00;
  undefined8 uVar17;
  size_t unaff_x24;
  void *__s_01;
  size_t unaff_x25;
  void *__s_02;
  void *__s_03;
  void *__dest;
  ulong uVar18;
  size_t __n;
  long unaff_x29;
  
  bVar3 = *(byte *)(param_1 + 0x135);
  *(long *)(unaff_x29 + -0x100) = in_x9;
                    /* try { // try from 023a613c to 024a613f has its CatchHandler @ 023a627c */
                    /* try { // try from 023a6140 to 024a6273 has its CatchHandler @ 023a5c18 */
  *(undefined8 *)(unaff_x29 + -0xe0) = unaff_x19;
  *(undefined8 *)(unaff_x29 + -0x130) = unaff_x23;
  if ((bVar3 & 1) == 0) {
    param_1 = FUN_01ecaf44();
  }
  lVar12 = in_x9 - ((ulong)(*(int *)(param_1 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x118) = lVar12;
  uVar18 = unaff_x21 + 0xfU & 0x1fffffff0;
  __src = (void *)(lVar12 - uVar18);
  *(long *)(unaff_x29 + -0xd8) = unaff_x21;
  __dest = (void *)((long)__src - uVar18);
  uVar14 = unaff_x24 + 0xf & 0x1fffffff0;
  lVar12 = (long)__dest - uVar14;
  *(long *)(unaff_x29 + -0x110) = lVar12;
  uVar16 = unaff_x25 + 0xf & 0x1fffffff0;
  lVar12 = lVar12 - uVar16;
  *(long *)(unaff_x29 + -0x128) = lVar12;
  __s_00 = (void *)(lVar12 - uVar14);
  *(undefined8 *)(unaff_x29 + -0x50) = 0;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(undefined8 *)(unaff_x29 + -0x60) = 0;
  *(undefined8 *)(unaff_x29 + -0x58) = 0;
  *(size_t *)(unaff_x29 + -0x108) = unaff_x24;
  memset(__s_00,0,unaff_x24);
  __s_01 = (void *)((long)__s_00 - uVar18);
  memset(__s_01,0,*(size_t *)(unaff_x29 + -0xd8));
  __s = (void *)((long)__s_01 - uVar16);
  *(undefined8 *)(unaff_x29 + -0x70) = 0;
  *(undefined8 *)(unaff_x29 + -0x68) = 0;
  *(size_t *)(unaff_x29 + -0x120) = unaff_x25;
  memset(__s,0,unaff_x25);
  __s_03 = (void *)((long)__s - uVar18);
  memset(__s_03,0,*(size_t *)(unaff_x29 + -0xd8));
  __s_02 = (void *)((long)__s_03 - uVar18);
  *(undefined8 *)(unaff_x29 + -0x80) = 0;
  *(undefined8 *)(unaff_x29 + -0x78) = 0;
                    /* try { // try from 023a6274 to 024a628b has its CatchHandler @ 023a62a0 */
  memset(__s_02,0,*(size_t *)(unaff_x29 + -0xd8));
                    /* catch() { ... } // from try @ 023a613c with catch @ 023a627c */
  pvVar8 = (void *)((long)__s_02 - uVar18);
  *(undefined8 *)(unaff_x29 + -0x90) = 0;
  *(undefined8 *)(unaff_x29 + -0x88) = 0;
                    /* try { // try from 023a628c to 024a6297 has its CatchHandler @ 023a5c18 */
  *(void **)(unaff_x29 + -0xf8) = pvVar8;
                    /* try { // try from 023a6298 to 024a629f has its CatchHandler @ 023a62a0 */
  memset(pvVar8,0,*(size_t *)(unaff_x29 + -0xd8));
                    /* catch(type#2 @ 00000000) { ... } // from try @ 023a6274 with catch @ 023a62a0
                       catch(type#2 @ 00000000) { ... } // from try @ 023a6298 with catch @ 023a62a0
                        */
                    /* try { // try from 023a62a4 to 024a661b has its CatchHandler @ 023a62a4
                       catch() { ... } // from try @ 023a62a4 with catch @ 023a62a4
                       catch() { ... } // from try @ 023a663c with catch @ 023a62a4
                       catch() { ... } // from try @ 023a6788 with catch @ 023a62a4
                       catch() { ... } // from try @ 023a67a4 with catch @ 023a62a4
                       catch() { ... } // from try @ 023a67cc with catch @ 023a62a4
                       catch() { ... } // from try @ 023a6918 with catch @ 023a62a4 */
  *(undefined8 *)(unaff_x29 + -0xa0) = 0;
  *(undefined8 *)(unaff_x29 + -0x98) = 0;
  *(void **)(unaff_x29 + -0xf0) = (void *)((long)pvVar8 - uVar18);
  memset((void *)((long)pvVar8 - uVar18),0,*(size_t *)(unaff_x29 + -0xd8));
  *(undefined8 *)(unaff_x29 + -0xb0) = 0;
  *(undefined8 *)(unaff_x29 + -0xa8) = 0;
  *(undefined8 *)(unaff_x29 + -0xc0) = 0;
  *(undefined8 *)(unaff_x29 + -0xb8) = 0;
  *(undefined8 *)(unaff_x29 + -0xd0) = 0;
  *(undefined8 *)(unaff_x29 + -200) = 0;
  if (unaff_x22 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar11 = thunk_FUN_01f117cc();
    uVar17 = thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInParent<Rigidbody>__);
    FUN_034efd20(uVar11,uVar17,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar11,*(undefined8 *)(unaff_x29 + -0x130));
  }
  if ((*(byte *)(*(long *)(*unaff_x20 + 8) + 0x135) & 1) == 0) {
    FUN_01ecaf44(*(long *)(*unaff_x20 + 8));
  }
  lVar12 = thunk_FUN_01f116d0();
  if (lVar12 != 0) {
    *(undefined8 *)(unaff_x29 + -0x40) = 0;
    *(undefined8 *)(unaff_x29 + -0x38) = 0;
    FUN_032f358c(unaff_x29 + -0x40,lVar12,*(undefined4 *)(unaff_x29 + -0xe4),
                 *(undefined8 *)(*unaff_x20 + 0x40));
    goto LAB_023a65e8;
  }
  if ((*(byte *)(*(long *)(*unaff_x20 + 0x10) + 0x135) & 1) == 0) {
    FUN_01ecaf44(*(long *)(*unaff_x20 + 0x10));
  }
  plVar9 = (long *)thunk_FUN_01f116d0();
  if (plVar9 == (long *)0x0) {
    *(long *)(unaff_x29 + -0x130) = unaff_x22;
    lVar12 = *(long *)(*unaff_x20 + 0x18);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_01ecaf44();
    }
    __n = *(size_t *)(unaff_x29 + -0xd8);
    lVar13 = **(long **)(unaff_x29 + -0x130);
    bVar3 = *(byte *)(lVar13 + 0x130);
    if ((bVar3 < *(byte *)(lVar12 + 0x130)) ||
       (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) != lVar12)) {
      lVar12 = *(long *)(*unaff_x20 + 0x20);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_01ecaf44();
        lVar13 = **(long **)(unaff_x29 + -0x130);
        bVar3 = *(byte *)(lVar13 + 0x130);
      }
      if ((bVar3 < *(byte *)(lVar12 + 0x130)) ||
         (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) != lVar12))
      {
        lVar12 = *(long *)(*unaff_x20 + 0x28);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_01ecaf44(lVar12);
        }
        pvVar8 = *(void **)(unaff_x29 + -0xf8);
        plVar9 = (long *)thunk_FUN_01f116d0(*(undefined8 *)(unaff_x29 + -0x130),lVar12);
        if (plVar9 == (long *)0x0) {
          lVar12 = *(long *)(*unaff_x20 + 0x30);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_01ecaf44(lVar12);
          }
          plVar9 = (long *)thunk_FUN_01f116d0(*(undefined8 *)(unaff_x29 + -0x130),lVar12);
          if (plVar9 == (long *)0x0) {
            (*(code *)**(undefined8 **)(*unaff_x20 + 0x50))(unaff_x29 + -0xa0,4,2,0);
            lVar12 = *(long *)*unaff_x20;
            if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
              lVar12 = FUN_01ecaf44(lVar12);
            }
            lVar13 = **(long **)(unaff_x29 + -0x130);
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == lVar12) {
                  puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                  uVar11 = *(undefined8 *)(unaff_x29 + -0x130);
                  goto LAB_023a6ed8;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            uVar11 = *(undefined8 *)(unaff_x29 + -0x130);
            puVar10 = (undefined8 *)FUN_01ecb238(uVar11,lVar12,0);
LAB_023a6ed8:
            plVar9 = (long *)(*(code *)*puVar10)(uVar11,puVar10[1]);
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            iVar6 = 4;
            iVar7 = 0;
            do {
              lVar12 = *plVar9;
              uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) ==
                      *(long *)
                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
                    puVar10 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_023a6f50;
                  }
                  uVar14 = uVar14 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar14 != 0);
              }
              puVar10 = (undefined8 *)
                        FUN_01ecb238(plVar9,*(long *)
                                             Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                                     ,0);
LAB_023a6f50:
              uVar14 = (*(code *)*puVar10)(plVar9,puVar10[1]);
              if ((uVar14 & 1) == 0) goto LAB_023a7110;
              lVar12 = *(long *)(*unaff_x20 + 0xf8);
              if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                lVar12 = FUN_01ecaf44(lVar12);
              }
              lVar13 = *plVar9;
              uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == lVar12) {
                    lVar12 = lVar13 + (long)*piVar15 * 0x10 + 0x138;
                    goto LAB_023a6fc4;
                  }
                  uVar14 = uVar14 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar14 != 0);
              }
              lVar12 = FUN_01ecb238(plVar9,lVar12,0);
LAB_023a6fc4:
              *(void **)(unaff_x29 + -0x28) = __src;
              lVar12 = *(long *)(lVar12 + 8);
              (**(code **)(lVar12 + 0x10))
                        (*(undefined8 *)(lVar12 + 8),lVar12,plVar9,unaff_x29 + -0x28,__src);
              memcpy(*(void **)(unaff_x29 + -0xf0),__src,__n);
              if (iVar7 == iVar6) {
                *(undefined8 *)(unaff_x29 + -0x28) = 0;
                *(undefined8 *)(unaff_x29 + -0x20) = 0;
                iVar6 = iVar7 << 1;
                *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0x98);
                *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0xa0);
                FUN_032f341c(unaff_x29 + -0x28,iVar6,2,0,*(undefined8 *)(*unaff_x20 + 0x50));
                uVar11 = *(undefined8 *)(unaff_x29 + -0x28);
                uVar1 = *(undefined8 *)(unaff_x29 + -0x20);
                uVar17 = *(undefined8 *)(unaff_x29 + -0xa0);
                uVar2 = *(undefined8 *)(unaff_x29 + -0x98);
                uVar5 = (*(code *)**(undefined8 **)(*unaff_x20 + 0x78))(unaff_x29 + -0xa0);
                (*(code *)**(undefined8 **)(*unaff_x20 + 0x110))(uVar17,uVar2,uVar11,uVar1,uVar5);
                FUN_032f3c24(unaff_x29 + -0xb0,*(undefined8 *)(*unaff_x20 + 0x118));
                *(undefined8 *)(unaff_x29 + -0xa0) = uVar11;
                *(undefined8 *)(unaff_x29 + -0x98) = uVar1;
              }
              memcpy(__src,*(void **)(unaff_x29 + -0xf0),*(size_t *)(unaff_x29 + -0xd8));
              puVar10 = *(undefined8 **)(*unaff_x20 + 0x70);
              uVar11 = *puVar10;
              *(int *)(unaff_x29 + -0x14) = iVar7;
              *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x14;
              *(void **)(unaff_x29 + -0x20) = __src;
              (*(code *)puVar10[2])(uVar11,puVar10,unaff_x29 + -0xa0,unaff_x29 + -0x28,__src);
              __n = *(size_t *)(unaff_x29 + -0xd8);
              iVar7 = iVar7 + 1;
            } while( true );
          }
          lVar12 = *(long *)(*unaff_x20 + 0x30);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_01ecaf44(lVar12);
          }
          lVar13 = *plVar9;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar12) {
                puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_023a6c60;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(plVar9,lVar12,0);
LAB_023a6c60:
          uVar5 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          (*(code *)**(undefined8 **)(*unaff_x20 + 0x50))
                    (unaff_x29 + -0x90,uVar5,*(undefined4 *)(unaff_x29 + -0xe4),0);
          lVar12 = *(long *)*unaff_x20;
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_01ecaf44(lVar12);
          }
          lVar13 = *plVar9;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar12) {
                puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_023a6cf0;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(plVar9,lVar12,0);
LAB_023a6cf0:
          plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
          puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          iVar6 = 0;
          do {
            lVar12 = *plVar9;
            uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                  puVar10 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_023a6d60;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar4,0);
LAB_023a6d60:
            uVar14 = (*(code *)*puVar10)(plVar9,puVar10[1]);
            if ((uVar14 & 1) == 0) goto LAB_023a6e40;
            lVar12 = *(long *)(*unaff_x20 + 0xf8);
            if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
              lVar12 = FUN_01ecaf44(lVar12);
            }
            lVar13 = *plVar9;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == lVar12) {
                  lVar12 = lVar13 + (long)*piVar15 * 0x10 + 0x138;
                  goto LAB_023a6dd4;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            lVar12 = FUN_01ecb238(plVar9,lVar12,0);
LAB_023a6dd4:
            *(void **)(unaff_x29 + -0x28) = __src;
            lVar12 = *(long *)(lVar12 + 8);
            (**(code **)(lVar12 + 0x10))
                      (*(undefined8 *)(lVar12 + 8),lVar12,plVar9,unaff_x29 + -0x28,__src);
            memcpy(pvVar8,__src,__n);
            memcpy(__dest,pvVar8,__n);
            puVar10 = *(undefined8 **)(*unaff_x20 + 0x70);
            uVar11 = *puVar10;
            *(int *)(unaff_x29 + -0x14) = iVar6;
            *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x14;
            *(void **)(unaff_x29 + -0x20) = __dest;
            (*(code *)puVar10[2])(uVar11,puVar10,unaff_x29 + -0x90,unaff_x29 + -0x28,__dest);
            iVar6 = iVar6 + 1;
          } while( true );
        }
        lVar12 = *(long *)(*unaff_x20 + 0x28);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_01ecaf44(lVar12);
        }
        lVar13 = *plVar9;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar12) {
              puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_023a6968;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar9,lVar12,0);
LAB_023a6968:
        uVar5 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        (*(code *)**(undefined8 **)(*unaff_x20 + 0x50))
                  (unaff_x29 + -0x80,uVar5,*(undefined4 *)(unaff_x29 + -0xe4),0);
        lVar12 = *(long *)*unaff_x20;
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_01ecaf44(lVar12);
        }
        lVar13 = *plVar9;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar12) {
              puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_023a69f8;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar9,lVar12,0);
LAB_023a69f8:
        plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
        puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        iVar6 = 0;
        do {
          lVar12 = *plVar9;
          uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                puVar10 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_023a6a68;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar4,0);
LAB_023a6a68:
          uVar14 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          if ((uVar14 & 1) == 0) goto LAB_023a6b48;
          lVar12 = *(long *)(*unaff_x20 + 0xf8);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_01ecaf44(lVar12);
          }
          lVar13 = *plVar9;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar12) {
                lVar12 = lVar13 + (long)*piVar15 * 0x10 + 0x138;
                goto LAB_023a6adc;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          lVar12 = FUN_01ecb238(plVar9,lVar12,0);
LAB_023a6adc:
          *(void **)(unaff_x29 + -0x28) = __src;
          lVar12 = *(long *)(lVar12 + 8);
          (**(code **)(lVar12 + 0x10))
                    (*(undefined8 *)(lVar12 + 8),lVar12,plVar9,unaff_x29 + -0x28,__src);
          memcpy(__s_02,__src,__n);
          memcpy(__dest,__s_02,__n);
          puVar10 = *(undefined8 **)(*unaff_x20 + 0x70);
          uVar11 = *puVar10;
          *(int *)(unaff_x29 + -0x14) = iVar6;
          *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x14;
          *(void **)(unaff_x29 + -0x20) = __dest;
          (*(code *)puVar10[2])(uVar11,puVar10,unaff_x29 + -0x80,unaff_x29 + -0x28,__dest);
          iVar6 = iVar6 + 1;
        } while( true );
      }
      uVar17 = *(undefined8 *)(unaff_x29 + -0x130);
      uVar5 = (*(code *)**(undefined8 **)(*unaff_x20 + 0xb8))(uVar17);
      (*(code *)**(undefined8 **)(*unaff_x20 + 0x50))
                (unaff_x29 + -0x70,uVar5,*(undefined4 *)(unaff_x29 + -0xe4),0);
      puVar10 = *(undefined8 **)(*unaff_x20 + 0xc0);
      pvVar8 = *(void **)(unaff_x29 + -0x128);
      uVar11 = *puVar10;
      *(void **)(unaff_x29 + -0x28) = pvVar8;
      (*(code *)puVar10[2])(uVar11,puVar10,uVar17,unaff_x29 + -0x28,pvVar8);
      memcpy(__s,pvVar8,*(size_t *)(unaff_x29 + -0x120));
      iVar6 = 0;
      while (uVar14 = (*(code *)**(undefined8 **)(*unaff_x20 + 0xe0))(__s), (uVar14 & 1) != 0) {
        puVar10 = *(undefined8 **)(*unaff_x20 + 0xd0);
        uVar11 = *puVar10;
        *(void **)(unaff_x29 + -0x28) = __src;
        (*(code *)puVar10[2])(uVar11,puVar10,__s,unaff_x29 + -0x28,__src);
        memcpy(__s_03,__src,__n);
        memcpy(__dest,__s_03,__n);
        puVar10 = *(undefined8 **)(*unaff_x20 + 0x70);
        uVar11 = *puVar10;
        *(int *)(unaff_x29 + -0x14) = iVar6;
        *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x14;
        *(void **)(unaff_x29 + -0x20) = __dest;
        (*(code *)puVar10[2])(uVar11,puVar10,unaff_x29 + -0x70,unaff_x29 + -0x28,__dest);
        iVar6 = iVar6 + 1;
      }
      lVar13 = *unaff_x20;
      lVar12 = *(long *)(lVar13 + 200);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_01ecaf44();
        lVar13 = *unaff_x20;
      }
      FUN_01f09244(lVar12,*(undefined8 *)(lVar13 + 0xe8),*(undefined8 *)(unaff_x29 + -0x118),__s,0,0
                  );
      uVar17 = *(undefined8 *)(unaff_x29 + -0x68);
      uVar11 = *(undefined8 *)(unaff_x29 + -0x70);
    }
    else {
      uVar17 = *(undefined8 *)(unaff_x29 + -0x130);
      uVar5 = (*(code *)**(undefined8 **)(*unaff_x20 + 0x80))(uVar17);
      (*(code *)**(undefined8 **)(*unaff_x20 + 0x50))
                (unaff_x29 + -0x60,uVar5,*(undefined4 *)(unaff_x29 + -0xe4),0);
      puVar10 = *(undefined8 **)(*unaff_x20 + 0x88);
      pvVar8 = *(void **)(unaff_x29 + -0x110);
      uVar11 = *puVar10;
      *(void **)(unaff_x29 + -0x28) = pvVar8;
      (*(code *)puVar10[2])(uVar11,puVar10,uVar17,unaff_x29 + -0x28,pvVar8);
      memcpy(__s_00,pvVar8,*(size_t *)(unaff_x29 + -0x108));
      iVar6 = 0;
      while (uVar14 = (*(code *)**(undefined8 **)(*unaff_x20 + 0xa8))(__s_00), (uVar14 & 1) != 0) {
        puVar10 = *(undefined8 **)(*unaff_x20 + 0x98);
        uVar11 = *puVar10;
        *(void **)(unaff_x29 + -0x28) = __src;
        (*(code *)puVar10[2])(uVar11,puVar10,__s_00,unaff_x29 + -0x28,__src);
        memcpy(__s_01,__src,__n);
        memcpy(__dest,__s_01,__n);
        puVar10 = *(undefined8 **)(*unaff_x20 + 0x70);
        uVar11 = *puVar10;
        *(int *)(unaff_x29 + -0x14) = iVar6;
        *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x14;
        *(void **)(unaff_x29 + -0x20) = __dest;
        (*(code *)puVar10[2])(uVar11,puVar10,unaff_x29 + -0x60,unaff_x29 + -0x28,__dest);
        iVar6 = iVar6 + 1;
      }
      lVar13 = *unaff_x20;
      lVar12 = *(long *)(lVar13 + 0x90);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_01ecaf44();
        lVar13 = *unaff_x20;
      }
      FUN_01f09244(lVar12,*(undefined8 *)(lVar13 + 0xb0),*(undefined8 *)(unaff_x29 + -0x100),__s_00,
                   0,0);
      uVar17 = *(undefined8 *)(unaff_x29 + -0x58);
      uVar11 = *(undefined8 *)(unaff_x29 + -0x60);
    }
  }
  else {
    lVar12 = *(long *)(*unaff_x20 + 0x28);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_01ecaf44(lVar12);
    }
    lVar13 = *plVar9;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar12) {
          puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_023a64c4;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar9,lVar12,0);
LAB_023a64c4:
    uVar5 = (*(code *)*puVar10)(plVar9,puVar10[1]);
    (*(code *)**(undefined8 **)(*unaff_x20 + 0x50))
              (unaff_x29 + -0x50,uVar5,*(undefined4 *)(unaff_x29 + -0xe4),0);
    iVar6 = (*(code *)**(undefined8 **)(*unaff_x20 + 0x78))(unaff_x29 + -0x50);
    if (0 < iVar6) {
      iVar6 = 0;
      do {
        lVar12 = *(long *)(*unaff_x20 + 0x10);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_01ecaf44(lVar12);
        }
        *(int *)(unaff_x29 + -0x14) = iVar6;
        lVar13 = *plVar9;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar12) {
              lVar12 = lVar13 + (long)*piVar15 * 0x10 + 0x138;
              goto LAB_023a657c;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        lVar12 = FUN_01ecb238(plVar9,lVar12,0);
LAB_023a657c:
        *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x14;
        *(void **)(unaff_x29 + -0x20) = __src;
        lVar12 = *(long *)(lVar12 + 8);
        (**(code **)(lVar12 + 0x10))
                  (*(undefined8 *)(lVar12 + 8),lVar12,plVar9,unaff_x29 + -0x28,__src);
        puVar10 = *(undefined8 **)(*unaff_x20 + 0x70);
        uVar11 = *puVar10;
        *(int *)(unaff_x29 + -0x14) = iVar6;
        *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x14;
        *(void **)(unaff_x29 + -0x20) = __src;
        (*(code *)puVar10[2])(uVar11,puVar10,unaff_x29 + -0x50,unaff_x29 + -0x28,__src);
        iVar6 = iVar6 + 1;
        iVar7 = (*(code *)**(undefined8 **)(*unaff_x20 + 0x78))(unaff_x29 + -0x50);
      } while (iVar6 < iVar7);
    }
    uVar17 = *(undefined8 *)(unaff_x29 + -0x48);
    uVar11 = *(undefined8 *)(unaff_x29 + -0x50);
  }
  goto LAB_023a65e4;
LAB_023a7110:
  if (plVar9 != (long *)0x0) {
    lVar12 = *plVar9;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_023a7168;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_01ecb238(plVar9,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_023a7168:
    (*(code *)*puVar10)(plVar9,puVar10[1]);
  }
  *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0x98);
  *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0xa0);
  (*(code *)**(undefined8 **)(*unaff_x20 + 0x50))
            (unaff_x29 + -0xc0,iVar7,*(undefined4 *)(unaff_x29 + -0xe4),0);
  (*(code *)**(undefined8 **)(*unaff_x20 + 0x110))
            (*(undefined8 *)(unaff_x29 + -0xa0),*(undefined8 *)(unaff_x29 + -0x98),
             *(undefined8 *)(unaff_x29 + -0xc0),*(undefined8 *)(unaff_x29 + -0xb8),iVar7);
  *(undefined8 *)(unaff_x29 + -200) = *(undefined8 *)(unaff_x29 + -0xb8);
  *(undefined8 *)(unaff_x29 + -0xd0) = *(undefined8 *)(unaff_x29 + -0xc0);
  FUN_032f3c24(unaff_x29 + -0xb0,*(undefined8 *)(*unaff_x20 + 0x118));
  uVar17 = *(undefined8 *)(unaff_x29 + -200);
  uVar11 = *(undefined8 *)(unaff_x29 + -0xd0);
  goto LAB_023a65e4;
LAB_023a6e40:
  if (plVar9 != (long *)0x0) {
    lVar12 = *plVar9;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_023a6ea0;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_01ecb238(plVar9,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_023a6ea0:
    (*(code *)*puVar10)(plVar9,puVar10[1]);
  }
  uVar17 = *(undefined8 *)(unaff_x29 + -0x88);
  uVar11 = *(undefined8 *)(unaff_x29 + -0x90);
  goto LAB_023a65e4;
LAB_023a6b48:
  if (plVar9 != (long *)0x0) {
    lVar12 = *plVar9;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto FUN_023a6c30;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_01ecb238(plVar9,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
FUN_023a6c30:
    (*(code *)*puVar10)(plVar9,puVar10[1]);
  }
  uVar17 = *(undefined8 *)(unaff_x29 + -0x78);
  uVar11 = *(undefined8 *)(unaff_x29 + -0x80);
LAB_023a65e4:
  *(undefined8 *)(unaff_x29 + -0x38) = uVar17;
  *(undefined8 *)(unaff_x29 + -0x40) = uVar11;
LAB_023a65e8:
  if (*(long *)(*(long *)(unaff_x29 + -0xe0) + 0x28) != *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(*(undefined8 *)(unaff_x29 + -0x40),*(undefined8 *)(unaff_x29 + -0x38));
  }
  return;
}


